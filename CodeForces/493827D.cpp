#include<iostream>
#include<vector>
using namespace std ;

void preKMP(string pattern, int f[])
{
    int m = pattern.length(), k;
    f[0] = -1;
    for (int i = 1; i < m; i++)
    {
        k = f[i - 1];
        while (k >= 0)
        {
            if (pattern[k] == pattern[i - 1])
                break;
            else
                k = f[k];
        }
        f[i] = k + 1;
    }
}
 
//check whether target string contains pattern 
bool KMP(string pattern, string target)
{
    int m = pattern.length();
    int n = target.length();
    int f[m];     
    preKMP(pattern, f);     
    int i = 0;
    int k = 0;        
    while (i < n)
    {
        if (k == -1)
        {
            i++;
            k = 0;
        }
        else if (target[i] == pattern[k])
        {
            i++;
            k++;
            if (k == m)
                return 1;
        }
        else
            k = f[k];
    }
    return 0;
}


int main(){
	
		int n , m ;
		int q ;
		string s1 , s2 ;
		cin >> n >> m ;
		cin >> s1 >> s2 ;
		cin >> q ;
		
		while(q--){
			int l , r ;
			string s3 = s1  ;
			cin >> l >> r ;
			
			s3.erase(l-1, r-l+1) ;
			
			if(KMP(s2,s3)){
				cout << "YES" << endl ;
			}else if(KMP(s2,s1)){
				cout << "YES" << endl ;
			}else{
				cout << "NO" << endl ;
			}
			
		}
		
	
	
	return 0 ;
}
