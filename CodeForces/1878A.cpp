#include<iostream>
#include<vector>
using namespace std ;

int main(){
	
	int t ;
	cin >> t; 
	
	while(t--){
		
		int n ;
		int k ;
		vector<int> arr ;
		cin >> n >> k ;
		for(int i = 0 ; i < n ; i++){
			int a ;
			cin >> a ;
			arr.push_back(a) ;
		}
		bool flag = false ;
		for(int i = 0 ; i < n ; i++ ){
			if(arr[i] == k){
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


