//https://codeforces.com/problemset/problem/652/B

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int main(){

	int n ;
	vector<long int> a ;
	cin >> n;
	for(int j = 0 ; j < n ; j++){
		long int x ;
		cin >> x ;
		a.push_back(x) ;
	}
	
	sort(a.begin() , a.end()) ;
	vector<int> ans ;
	int len = 0 ;
	if(n % 2 == 0){
		len = n / 2 ;
	}else{
		len = n / 2 + 1 ;
	}
	for(int j = 0 , k = n-1 ; j <= len ; j++ , k--){
		
		ans.push_back(a[j]);
		ans.push_back(a[k]) ;
		
	}
	bool flag = true ;
	for(int j = 0 ; j < n ; j++){
		if(j % 2 == 0 && ans[j] > ans[j+1] ){
			flag = false ;
		}else if(j % 2 != 0 && ans[j] < ans[j+2]){
			flag = false ;
		}
	}
	
	if(flag){
		for(int j = 0 ; j < n ; j++){
			cout << ans[j] << " " ;
		}
	}else{
		cout << "IMPOSSIBLE" ;
	}
	cout << endl ;

	return 0 ;
}


