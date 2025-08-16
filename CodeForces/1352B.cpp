#include<iostream>
#include<vector>
using namespace std ;


void solve(){
	
	int n , k ;
	cin >> n >> k ;
	
	int num = n - 2*k + 2 ;
	int num1 = n - k + 1 ;
	if(num > 0 && num % 2 == 0){
		cout << "YES" << endl ;
		for(int i = 0 ; i < k-1 ; i++){
			cout << 2 << " " ;
		}
		cout << num << endl ;
		
	}else if(num1 > 0  && num1 % 2 == 1 ){
		cout << "YES" << endl ;
		for(int i = 0 ; i < k-1 ; i++){
			cout << 1 << " " ;
		}
		cout << num1 << endl ;
	}else{
		cout << "NO" << endl ;
	}
	
	
}



int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		solve() ;
	}
	
	return 0 ;
}


