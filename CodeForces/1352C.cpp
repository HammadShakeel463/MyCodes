#include<iostream>
#include<vector>
using namespace std ;


void solve(){
	
	long int n , k ;
	cin >> n >> k ;
	long int ans = ((k-1) / (n-1)) + k ;	
	
	cout << ans << endl ;
	
}



int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		solve() ;
	}
	
	return 0 ;
}


