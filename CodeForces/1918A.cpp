#include<iostream>
#include<vector>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		int x , y ;
		cin >> x >> y ;
		
		long long int ans = x * (y/2) ;
		cout << ans << endl ;
	}
	
	return  0 ;
}


