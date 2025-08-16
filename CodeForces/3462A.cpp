#include<iostream>
#include<vector>
using namespace std ;


int main(){
	
	
		int n ;
		cin >> n ;
		int arr[7] ;
		
		for(int i = 0 ; i < 7 ; i++ ){
			cin >> arr[i] ;
		}
		int i = 0 ;
		while(n >= 0){
			if(n <= arr[i]){
				break ;
			}else{
				n -= arr[i] ;
			}
			
			if(i == 6){
				i = 0 ;
			}else{
				i++ ;
			}
		}
		cout << i+1 << endl ;
	
	
	return 0 ;
}



