#include<iostream>
#include<vector>

using namespace std ;


int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		string s ; 
		int n ;
		cin >> n  >> s ;
		int count = 0 ;
		for(int i = 0 ; i < n ; i++){
			if(s[i] == '@'){
				count++ ;
			}else if(s[i] == '*' && s[i+1] == '*'){
				break ;
			}
		}
		cout << count << endl ;
	}
	
	
	return 0 ;
}



