//https://codeforces.com/problemset/problem/1829/B
#include<iostream>
#include<vector>
using namespace std ;

int main(){
	
	int n ;
	cin >> n ;
	
	for(int i = 0 ; i < n ; i++ ){
		
		int len ;
		vector<bool> arr ;
		cin >> len ;
		for(int j = 0 ; j < len ; j++ ){
			bool a ;
			cin >> a ;
			arr.push_back(a) ;
		}
		
		int count = 0 ; 
		int ans = 0 ;
		for(int j = 0 ; j < len ; j++ ){
			if(arr[j] == 0 ){
				count++ ;
			}else{
				ans = max(count , ans) ;
				count = 0 ;
			}
		}
		ans = max(count , ans) ;
		cout << ans << endl ;
	}
	
	return 0 ;
}

