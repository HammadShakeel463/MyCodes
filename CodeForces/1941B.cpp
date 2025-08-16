#include<iostream>
#include<vector>

using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		int n ;
		cin >> n ; 
		
		vector<int> arr ;
		
		for(int i = 0 ; i < n ; i++ ){
			
			int a ;
			cin >> a;
			arr.push_back(a) ;
		}
		
		for(int i = 1 ; i < n-1 ; i++ ){
			arr[i] = (arr[i]) - 2* arr[i-1];
			arr[i+1] -= arr[i-1]  ;
			arr[i-1] = 0 ;
			if(arr[i] < 0){
				break ;
			}
		}
		bool flag  = true ;
		for(int i = 0 ; i < n ; i ++ ){
			if(arr[i] != 0){
				flag = false ;
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



