#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;


int main(){
	int t ;
	cin >> t ;
	while(t--){
		int k ;
		cin >> k ;
		vector<int> arr(k+1,0) ;
		for(int i = 0 ; i < n ; i++){
			int a ;
			cin >> a ;
			arr[i+1] = 1 ;
		}
		int ans = 0 ;
		if(n == 1){
			cout << 0 << endl ;
			continue ;
		}
		sort(arr.begin() , arr.end() ) ;
		for(int i = 0 ; i < n-1 ; i++){
			if(arr[i] == arr[i+1] ){
				ans++ ;
				i++ ;
			}
		}
		cout << ans << endl ;
	}
	return 0 ;
}
