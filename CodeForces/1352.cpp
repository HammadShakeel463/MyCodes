#include<iostream>
#include<vector>
using namespace std ;


void solve(){
	
	int n ;
	
	cin >> n ;
	
	if(n < 4){
		cout << -1 << endl ;
		return  ;
	}
	
	
	for(int i = n ; i >= 1 ; i--){
		if(i % 2 == 1 ){
			cout << i << " " ;
		}
	}
	cout << 4 << " " << 2 << " " ;
	for(int i = 6 ; i <= n ; i++){
		if(i % 2 == 0  ){
			cout << i << " " ;
		}
	}
	cout << endl ;
}



int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		solve() ;
	}
	
	return 0 ;
}


