#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		int n , m , k;
		vector<int> arr ;
		vector<int> b ;
		vector<bool> ans(k+1,false) ;
		cin >> n >> m >> k ;
		for(int i = 0 ; i < n ; i++ ){
			int a ;
			cin >> a ;
			arr.push_back(a) ;
		}
		for(int i = 0 ; i < m ; i++ ){
			int a ;
			cin >> a ;
			b.push_back(a) ;
		}
		sort(arr.begin(),arr.end()) ;
		sort(b.begin(),b.end()) ;
		
		for(int i = 0 , j = 0 ; j < k/2 && i < n ; i++ ){
			if(arr[i] > k){
				break ;
			}
			if(ans[arr[i]] == false){
				ans[arr[i]] = true;
				j++ ;
			}
		}
		bool flag = true ;
		for(int i = 0, j= 0  ; j < k/2 && i < m ; i++){
			if(b[i] > k){
				break ;
			} 
			if(ans[b[i]] == false){
				ans[b[i]] = true ;
				j++ ;
			}
		}
		for(int i = 1 ; i <= k ; i++ ){
			if(ans[i] == false){
				flag = false ;
				break ;
			}
		}
		if(flag){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl ;
		}
	}
	
	return 0 ;
}

