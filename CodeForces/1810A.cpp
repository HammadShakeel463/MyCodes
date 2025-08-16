//https://codeforces.com/contest/1810/problem/A

#include<iostream>
#include<vector>

using namespace std ;


int main(){
	
	int t; 
	cin >> t ;
	
	for(int i = 0 ; i < t ; i++ ){
		
		int n ;
		vector<long int> arr ;
		cin >> n ;
		for(int j = 0 ; j < n ; j++ ){
			long int a ;
			cin >> a ;
			arr.push_back(a) ;
		}
		bool flag = false ;
		
		for(int j = 0 ; j < n ; j ++ ){
			if(arr[j] <= j+1){
				flag = true ;
				break ;
			}
		}
		
		if(flag){
			cout << "YES" << endl ;
		}else{
			cout << "NO" << endl ;
		}
		
	}
	
	
	return 0 ;
}


