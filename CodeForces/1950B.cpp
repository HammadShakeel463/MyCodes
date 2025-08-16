#include<iostream>
#include<vector>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	while(t--){
		int n ;
		int toggle = 0 ;
		int toggley = 0 ; 
		int change = 1 ;
		cin >> n ;
		
		for(int i = 0 ; i < 2*n ; i++ ){
			
			if(i % 2 == 0){
				if(change == 1){
					change = 0 ;
				}else{
					change = 1 ;
				}
			}
			toggle = change ;
			for(int j = 0 ; j < 2*n ; j++){
				if( j % 2 == 0 ){
					if(toggle == 0)
						toggle = 1 ;
					else
						toggle = 0 ;
				}
				if(toggle == 1 ){
					cout << "#" ;
				}else{
					cout << ".";
				}
				
			}
			cout << endl ;
		}
		
	}
	
	return 0 ;
}


