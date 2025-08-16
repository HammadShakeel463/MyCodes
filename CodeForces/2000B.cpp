#include<iostream>
#include<vector>
using namespace std ;


int main(){
	
	int t ;
	cin >> t;
	
	while(t--){
		int n ;
		cin >> n ;
		vector<int> arr(n+1,0) ;
		
		int a ;
		cin >> a ;
		arr[a] = 1 ;
		bool flag = true ;
		for(int i = 2 ; i <= n ; i++ ){
			cin >> a ;
			if( a < n && a > 1 && (arr[a+1] != 1)){
				if(a < n  && a > 1 && arr[a-1] != 1){
					flag = false ;
				}
			}
			if(a == 1 && arr[a+1] != 1){
				flag = false ;
			}else if(a == n && arr[a-1] != 1){
				flag = false ;
			}
			
			cout << flag << " " ;
			arr[a] = 1 ;
		}
		if(flag){
			cout << "YES" << endl ;
		}else{
			cout << "NO" << endl ;
		}
		
	}
	
	
	return 0 ;
}


