#include<iostream>
#include<vector>
#include<cmath>
using namespace std ;

int main(){
	
	int t ; 
	cin >> t ;
	
	while(t--){
		
		int n ;
		cin >> n ;
		long long sum = 0 ; 
		
		for(int i = 0 ; i < n ; i++){
			long long a ;
			cin >> a ;
			sum += a ;
		}
		
		long long  ans = sqrt(sum) ;
		
		if(ans*ans == sum ){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl ;
		}
		
	}
	
	
	return 0 ;
}


