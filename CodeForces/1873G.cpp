#include<iostream>
#include<vector>

using namespace std ;

int fun(int n , string &s){
	int count = 0 ;
	for(int i = 0 ; i < n - 1 ; i++){
			
			if(s[i] == 'A' && s[i+1] == 'B'){
				s[i+1] = 'C' ;
				s[i] = 'B' ;
				count ++ ;
			}else if(s[i] == 'B' && s[i+1] == 'A'){
				s[i] = 'C' ;
				s[i+1] = 'B' ;
				count ++ ;	
			}
			
		}
	return count ;
}


int main(){

	int t ;
	cin >> t ;
	
	while(t--){
		
		int n ;
		string s ;
		cin >> s ;
		n = s.size() ;
		int count = 0 ;
		for(int i = 0 ; i < n - 1 ; i++){
			
			if(s[i] == 'A' && s[i+1] == 'B'){
				s[i+1] = 'C' ;
				s[i] = 'B' ;
				count ++ ;
			}else if(s[i] == 'B' && s[i+1] == 'A'){
				s[i] = 'C' ;
				s[i+1] = 'B' ;
				count ++ ;	
			}
			
		}
		long int sum = 0 ;
		while(count > 0 ){ 
			sum += count ;
			count = 0 ;
			for(int i = 0 ; i < n - 1 ; i++){
			
			if(s[i] == 'A' && s[i+1] == 'B'){
				s[i+1] = 'C' ;
				s[i] = 'B' ;
				count ++ ;
			}else if(s[i] == 'B' && s[i+1] == 'A'){
				s[i] = 'C' ;
				s[i+1] = 'B' ;
				count ++ ;	
			}
			
		}
		}
		
		cout << sum << endl ;
	}
	
	
	return 0 ;
}

