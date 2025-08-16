#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

int main(){
	
	int n ;
	vector<int> arr ;
	
	cin >> n ;
	
	for(int i = 0 ; i < n ; i++){
		int a ;
		cin >> a; 
		arr.push_back(a) ;
	}
	
	sort(arr.begin(),arr.end()) ;
	
	int ans = min(abs(arr[1] - arr[n-1]),abs(arr[n-2] - arr[0])) ;
	cout << ans ;
	
	return 0 ;
}


