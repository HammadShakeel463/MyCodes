#include<iostream>
#include<vector>

using namespace std ;


int main(){
	
	int n ;
	cin >> n ; 
	
	string s ;
	cin >> s ;
	for(int i = 0 , j = 1 ; i < n ; i+=j , j++ ){
		cout << s[i] ;
	}
	
	
	return 0 ;
}



