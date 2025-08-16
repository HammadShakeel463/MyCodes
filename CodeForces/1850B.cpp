#include<iostream>
#include<vector>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	while(t--){
		
		int n ;
		cin >> n ;
		vector<int> a ;
		vector<int> b ;
		
		for(int i = 0 ; i < n ; i++ ){
			int x ;
			cin >> x ;
			a.push_back(x) ;
			cin >> x ;
			b.push_back(x) ;
		}
		
		int max = 0 ;
		int ind = 0 ;
		for(int i = 0 ; i < n ; i++ ){
			if(a[i] <= 10){
				if(b[i] > max){
					max = b[i] ;
					ind = i ;
				}
			}
		}
		
		
		cout << ind+1 << endl ;
		
	}
	
	
	return 0 ;
}


