#include<iostream>
#include<vector>
using namespace std; 

int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		int n ;
		cin >> n ;
		
		if(n <= 28){
			cout << "aa" << char(97+n-3) << endl ; 
		}else{
			n -= 26 ;
			if(n > 27){
				n -= 26 ;
				cout << char(97+n-1) << "z" << "z" << endl ;  
			}else{
				cout << "a" << char(97+n-2) << "z"  << endl ;
			}
		}
	}
	
	return 0 ;
}

