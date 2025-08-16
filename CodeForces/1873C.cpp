#include<iostream>
#include<vector>
using namespace std ;


int main(){
	
	int t ;
	cin >> t ;
	while(t-- ){
		
		int len = 10 ;
		char arr[10][10] ;
		
		for(int i = 0 ; i < len ; i++){
			for(int j = 0 ; j < len ; j++ ){
				cin >> arr[i][j] ;	
			}
		}
		
		int sum = 0 ;
		int num = 1 ;
		for(int i = 0 ; i < len/2 ; i++ ){
			for(int j = 0 ; j < len/2 ; j++){
				if(i + 1 <= j){
					sum += (i+1) ; 
				}
			}
		}
		cout << sum << endl ;
		
	}
	
	return 0 ;
}


