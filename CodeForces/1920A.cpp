#include<iostream>
#include<vector>
using namespace std ;

int main(){
	
	int t ;
	cin >> t; 
	
	while(t--){
		
		int n ;
		long long int l = 0 , r = 10000000000 ;
		long long int e = 0 ;
		vector<long long int> arr ;
		
		cin >> n ;
		for(int i = 0 ; i < n ; i++ ){
			int a ;
			long long int b ;
			cin >> a >> b ;
			if(a == 1){
				l = max(l , b) ;
			}else if(a == 2){
				r = min(r, b) ;
			}else{
				arr.push_back(b) ;
			}
		}
		int len = arr.size() ;
		for(int i = 0 ; i < len ; i++){
			if(arr[i] <= r && arr[i] >= l ){
				e ++ ;
			}
		}
		long long int q = 0 ;
		cout << max(r-l-e+1, q) << endl;
	}
	
	
	return 0 ;
}


