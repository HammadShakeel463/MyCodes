#include<iostream>
#include<vector>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	for(int i = 0 ; i < t ;i++ ){
		
		string s ;
		int n ;
		cin >> n >> s; 
		string ans = "" ;
		for(int j = 0 ; j < n ; j++){
			int ind = -1 ;
			ans += s[j] ;
			for(int k = j+1 ; k < n ; k++ ){
				if(s[k] == s[j]){
					ind = k ;
					break ;
				}
			}
			if(ind > 0){
				j = ind ;
			}
		} 
		cout << ans << endl ;
	}
	
	
	return 0 ;
}

