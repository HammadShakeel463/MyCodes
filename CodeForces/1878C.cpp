#include<iostream>
#include<vector>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	while(t--){
		
		long long int n , k , x ;
		cin >> n >> k >> x ;
		
		long long int sum ;
		long long int sum2 ;
		if(n < k){
			cout << "NO" <<endl ;
			continue ;
		}
		sum2 = ((n)*((n)+1)) / 2 ;
		sum = (k * (k + 1) )/ 2 ;
		
		sum2 -= (((n-k) * ((n-k)+1))/2)  ;
		
		if(sum <= x && sum2 >= x){
			cout << "YES" << endl ;
		}else{
			cout << "NO" << endl ;
		}
		
	}
	return 0 ;
}
