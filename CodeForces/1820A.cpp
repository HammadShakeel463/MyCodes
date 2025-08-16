//https://codeforces.com/contest/1820/problem/A

#include<iostream>
#include<vector>
#include<string>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	for(int i = 0 ; i < t ; i++ ){
		
		string s ;
		cin >> s; 
		int n = s.size() ;
		int count = 0 ;
		int op = 0 ;
		if(n == 1){
			s = s + "^" ;
			n++ ;
			op ++ ;
		} 
		if(s[0] == '_' ){
			s =  "^" + s ;
			op++ ;
			n++ ;
	    }
		if(s[n-1] == '_'){
			s = s +  "^" ;
			n++ ;
			op++ ;
		}
		for(int j = 1 ; j < n-1 ; j++ ){
			
			if(s[j] == '_' && s[j+1] == '_'){
				s = s.substr(0,j+1) + "^" + s.substr(j+1 , n-j+2) ;
				op++ ;
				n++ ;
			}
			
		}
		
		cout << op << endl ;
		
	}
	
	
	return 0 ;
	
}




