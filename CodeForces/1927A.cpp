#include<iostream>
#include<vector>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	while(t--){
		int n ;
		string s ;
		cin >> n >> s ;
		int first = 0  , last = n ;
		for(int i = 0 ; i < n ; i++ ){
			if(s[i] == 'B'){
				break ;
			}
			first++ ;
		}
		for(int i = n-1 ; i >= first ; i-- ){
			if(s[i] == 'B'){
				break ;
			}
			last-- ;
		}
		
		cout << last - first << endl ;
		
	}
	
	return 0 ;
}


