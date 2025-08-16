#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;


int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		int n ; 
		long int sum = 0 ;
		cin >> n ;
		for(int i = 0 ; i < n ; i++ ){
			int a ;
			cin >> a ;
			sum += abs(a) ;
		}
		
		cout << sum << endl ;
		
	}
	
	
	return 0 ;
}

