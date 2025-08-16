#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;



int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		
		int n ; 
		cin >> n ;
		vector<int> arr ;
		for(int i = 0 ; i < n ; i++ ){
			int a; 
			cin >> a ;
			arr.push_back(a) ;
		}
		
		sort(arr.begin() , arr.end()) ;
		
		long int pro1 = arr[0] + 1 ;
		for(int i = 1 ; i < n ; i++){
			pro1 *= arr[i] ;
		}
		
		long int pro2 = arr[n-1] + 1 ;
		for(int i = 0 ; i < n - 1  ; i++ ){
			pro2 *= arr[i] ;
		}
		
		cout << max(pro1 , pro2) << endl ;
		
	}
	
	
	return 0 ;
}

