#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int main(){
	
	int t; 
	cin >> t ;
	
	while(t--){
		int n , m ;
		vector<long int> a ;
		vector<long int> b ;
		
		cin >> n >> m ;
		
		for(int i = 0 ; i < n ; i ++ ){
			long int num ; 
			cin >> num ;
			a.push_back(num) ;
		} 
		for(int i = 0 ; i < m ; i ++ ){
			long int num ; 
			cin >> num ;
			b.push_back(num) ;
		} 
		
		sort(a.begin(), a.end()) ;
		sort(b.begin(), b.end()) ;
		long long int ans = 0 ;
		long long int ans2 = 0 ;
		
		if(n == 1 && m == 1 ){
			ans = max(abs(a[0] - b[m-1]) , abs(a[0] - b[0])) ;
			ans2 = max(abs(a[n-1] - b[0]) , abs(a[n-1] - b[m-1])) ;
			ans = max(ans,ans2) ;
			cout << ans ;
			continue ;
		}
		
	
	    if (m > n ){
	    	int i = 0 , j = n-1 ; 
	    
	    	for( ; j >= n/2 ; j-- , i++ ){
	    		ans += abs(a[j] - b[i]) ;
			}
			i = m-1 ;
			for(int k = 0 ; k <= j ; k++ , i--){
				ans += abs(a[k] - b[i]) ;
			}
			
			i = 0 , j = n-1 ;
			for( ; j > n/2 ; j-- , i++ ){
	    		ans2 += abs(a[j] - b[i]) ;
			}
			i = m-1 ;
			for(int k = 0 ; k <= j ; k++ , i--){
				ans2 += abs(a[k] - b[i]) ;
			}
			
			ans = max(ans, ans2 ) ;
		}else{
	    	int i = 0 , j = m-1 ;  
	    	for( ; j >= m/2 ; j-- , i++ ){
	    		ans += abs(a[i] - b[j]) ;
			}
			i = n-1 ;
			for(int k = 0 ; k <= j ; k++ , i--){
				ans += abs(a[i] - b[k]) ;
			}
			
			for(int i = 0 , j = n-1 ; i < m ; i++, j-- ){
				ans2 += abs(a[j] - b[i]) ;
			}
			ans = max(ans, ans2 ) ;
		}
		cout << ans << endl ;
	}
	
	
	return 0 ;
}


