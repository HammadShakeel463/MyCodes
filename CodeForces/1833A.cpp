///https://codeforces.com/problemset/problem/1833/A
#include<iostream>
#include<vector>

using namespace std ;


int main(){
	
	int n; 
	cin >> n ;
	
	for(int i = 0 ; i < n ; i++){
		int arr[7][7] = {0} ;
		string s ;
		int len;
		cin >> len ;
		cin >> s ;
		
	
		int count = 0 ;
		for(int j = 0 ; j < len - 1 ; j ++ ){
			int ind1 = int(s[j]) - 97 ;
			int ind2 = int(s[j+1]) - 97 ;
			
			if(arr[ind1][ind2] == 0){
				count ++ ;
				arr[ind1][ind2] = 1; 
			}
			
		}
		cout << count << endl ; 
	}
	
	return 0 ;
}

