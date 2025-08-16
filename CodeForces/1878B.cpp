#include<iostream>
#include<vector>
using namespace std ;


int main(){
	
	int t; 
	cin >> t ;
	
	while(t--){
		int n ;
		cin >> n ;
		vector<int>arr(n) ;
		
		arr[0] = 2 ;
		arr[1] = 3 ;
		cout << arr[0] << " " << arr[1]  ;
		for(int i = 2 ; i < n ; i++){
			
			if(((arr[i-1] + arr[i-2])*3) % (arr[i-1] + arr[i-2]) == 0){
				arr[i] = arr[i-1] + arr[i-2] + 1 ;
 				while((arr[i]* 3 ) % (arr[i-1] + arr[i-2]) == 0){
					arr[i]++ ;
				}
			}else{
				arr[i] = arr[i-1] + arr[i-2] ;
				
			}
			cout << " " <<  arr[i] ;
		}
		cout << endl ;
		
	}
	
	
	return 0 ;
}

