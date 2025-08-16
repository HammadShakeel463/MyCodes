#include<iostream>
#include<bits/stdc++.h>

using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		int n ;
		string s ;
		cin >> s ;
		n = s.size() ;
		bool flag = false ;
		for(int i = 0 ; i < n-1 ; i++){
			if(s[i] != s[i+1]){
				char temp = s[i] ;
				s[i] = s[i+1] ;
				s[i+1] = temp ;
				flag = true ;
				break ;
			}
		}
		if(flag){
			cout << "YES" << endl << s << endl;
		}else{
		cout << "NO" << endl ;	
	}
	
}
	return 0 ;
}


