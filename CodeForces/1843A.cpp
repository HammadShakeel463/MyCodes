#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;


int main(){
	
	int t ;
	cin >> t ;
	
	for(int i = 0 ; i < t ; i ++ ){
		
		int n ;
		cin >> n ; 
		vector<int> arr ;
		
		for(int j = 0 ; j < n ; j++ ){
			int a ;
			cin >> a ;
			arr.push_back(a) ;
		}
		
		sort(arr.begin() , arr.end()) ;
		
		int count = 0 ; 
		
		for(int j = 0 , k = n - 1  ; j < k ; j++, k--  ){
			count += arr[k]-arr[j] ;
		}
		cout << count << endl ;
	}
	
	
	return 0 ;
}


