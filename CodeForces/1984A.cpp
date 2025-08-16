#include<iostream>
#include<vector>

using namespace std ;

int main(){
	int t ;
	cin >> t ;
	
	while(t--){
		int n ;
		vector<int> arr ;
		cin >> n ;
		for(int i = 0 ; i < n ; i++){
			int a ;
			cin >> a; 
			arr.push_back(a) ; 
		}
		
		if(n <= 2 ){
			cout << "NO" << endl ;
			continue ;
		}
		
		int dif1 = arr[n-1] - arr[0] ;
		int diff2 = 0 ;
		
		if(dif1 != diff2 ){
			cout << "YES" << endl ;
			for(int i = 0 ; i < n / 2  ; i++ ){
				cout << "R" ;
			}
			cout << "B" ;
			for(int i = n/2 + 1 ; i < n  ; i++ ){
				cout << "R" ;
			}
			cout << endl ; 
		}else{
			cout << "NO" << endl ;
		}
		
	}
	
	
	return 0 ;
}


