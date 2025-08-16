//https://codeforces.com/problemset/problem/1607/C

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	for(int i = 0 ; i < t ; i++ ){
		
		int n ; 
		vector<long long int> arr ;
		cin >> n ;
		for(int j = 0 ; j < n ; j++ ){
			long long int a ;
			cin >> a ;
			arr.push_back(a) ; 
		}
		long long int min = arr[0] ;
		if(n > 1){
			sort(arr.begin() , arr.end()) ;
	 		long long int num = arr[0] ;
	 		min = arr[0] ;
	 		int j ;
	 		for(j = 1 ; j < n ; j++){
	 			arr[j] = arr[j] - num ;
	 			num += arr[j] ;
	 			//cout << arr[j] << " " ;
	 			if(arr[j] > min ){
	 				min = arr[j] ;
				 }
			}
	 	}
 		cout << min << endl ;
 		
	}
	
	
	return 0 ;
}



