#include<iostream>
#include<vector>

using namespace std ;

int main(){
	
	int t; 
	cin >> t ;
	
	while(t--){
		int n ;
		vector<int> b ;
		cin >> n ;
		
		for(int i = 0 ; i < n ; i++ ){
			
			int x ;
			cin >> x ;
			b.push_back(n-x+1) ;
		}
		
		for(int i = 0 ; i < n ; i++){
			cout << b[i] << " " ;
		}
		
		cout << endl ;
		
	}
	
	
	return 0 ;
}



