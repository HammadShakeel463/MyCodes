//https://codeforces.com/contest/1801/problem/G

#include<iostream>
#include<vector>
#include<string>

using namespace std ;


void computeLPSArray(string pat, int M, int* lps);
 
// Prints occurrences of txt[] in pat[]
int KMPSearch(string txt, string pat ,int l,  int N , int M)
{
    int lps[M];
 	int count = 0 ;
   computeLPSArray(pat, M, lps);
 
    int i = l; // index for txt[]
    int j = 0; // index for pat[]
    while ((N - i) >= (M - j)) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }
 
        if (j == M) {
            count++ ;
            
            j = lps[j - 1];
        }
 
        // mismatch after j matches
        else if (i < N && pat[j] != txt[i]) {
            // Do not match lps[0..lps[j-1]] characters,
            // they will match anyway
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    return count ;
}
 
// Fills lps[] for given pattern pat[0..M-1]
void computeLPSArray(string pat, int M, int* lps)
{
    int len = 0;
 
    lps[0] = 0; // lps[0] is always 0
 
    int i = 1;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
            if (len != 0) {
                len = lps[len - 1];
 
            }
            else // if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}


int main(){
	
	int n , m ;
	string t ;
	cin >> n >> m ;
	cin >> t ;
	
	
	int len[n] ;
	string s[n] ;
	int l[m] ;
	int r[m] ;
	
	
	int count = 0 ;
	for(int i = 0 ; i < n ; i++){
		cin >> s[i] ;
		len[i] = s[i].size() ;
	}
	
	for(int i = 0 ; i < m ; i++ ){
		cin >> l[i] >> r[i] ; 
	}
	
	for(int i = 0 ; i < m ; i++ ){
		count = 0 ;
		for(int j = 0 ; j < n ; j++ ){
			count += KMPSearch(t , s[j] , l[i]-1 , r[i]  ,len[j]);
			//cout << count << endl ;
		}
		
	cout << count << " ";
	}
	cout << endl ;
	return 0 ;
}

 

