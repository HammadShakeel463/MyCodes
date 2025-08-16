#include<iostream>
#include<vector>

using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		int n , k ;
		cin >> n >> k ;
		vector<int> arr ;
		vector<int> h ;
		for(int i = 0 ; i < n ; i++ ){
			int a ;
			cin >> a ;
			arr.push_back(a) ;
		}	
		
		for(int i = 0 ; i < n ; i++ ){
			int a ;
			cin >> a ; 
			h.push_back(a) ;
		}
		long int sum  = 0 ;
		int count = 0 ;
		int ans = 0 ;
		for(int i = 0 ; i < n ; i++ ){
			if(h[i] % h[i+1] == 0 ){
				sum += (arr[i]) ;
				if(sum + arr[i+1] <= k ){
					count ++ ;
				}else{
					if(sum <=k)
						count++ ;
					else 
						count = 0 ;
					sum = 0 ;
				} 
			}else{
				sum = 0 ;
				count = 0 ;
			}
			ans = max(ans , count) ;
		}
		cout << ans << endl ;
	}
	
	return 0 ; 
}



