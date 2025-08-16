#include<iostream>
#include<vector>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		int n , m ;
		cin >> n >> m ;
		vector<vector<int> > ar(n) ;
		
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++){
				int a  ;
				cin >> a ; 
				ar[i].push_back(a) ;
			}
		}
		
		for(int i = 0 ; i < m - 1 ; i++){
			for(int j = 0 ; j < n-1 ; j++ ){
				if(ar[j][i] > ar[j+1][i] && ar[j][i] > ar[j][i] > ar[j][i+1] ){
					ar[j][i] = min(ar[j+1][i] , ar[j][i+1]) ;
				}
			}
			if(ar[n-1][i] > ar[n-2][i] && ar[n-1][i] > ar[n-1][i+1] ){
					ar[n-1][i] = min(ar[n-2][i] , ar[n-1][i+1]) ;
			}
		}
		for(int i = 0 ; i < n-1 ; i++ ){
			if(ar[i][m-1] > ar[i][m-2] && ar[i][m-1] > ar[i+1][m-1] ){
					ar[i][m-1] = min(ar[i][m-2] , ar[i+1][m-1]) ;
			}
		}
		if(ar[n-1][m-1] > ar[n-1][m-2] && ar[n-1][m-1] > ar[n-2][m-1] ){
					ar[n-1][m-1] = min(ar[n-2][m-2] , ar[n-2][m-1]) ;
		}
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++){
				cout << ar[i][j] << " " ;
			}
			cout << endl ;
		}
	}
	
	
	return 0 ;
}

