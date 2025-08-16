#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;


int main(){
	
	int t ;
	cin >> t ;
	
	for(int i = 0 ; i < t ; i++){
		
		int n , num ;
		cin >> n >> num ;
		vector<int> a ;
		vector<int> b ;
		
		for(int j = 0 ; j < n ; j++ ){
			int x ;
			cin >> x ;
			a.push_back(x) ;
		}	
		for(int j = 0 ; j < n ; j++ ){
			int x ;
			cin >> x ;
			b.push_back(x) ;
		}	
			
		
		for(int j = 0; j < n ; j++){
			if(abs(a[j] - b[j] ) <= num){
				continue ;
			}
			for(int k = j + 1 ; k < n ; k++){
				if(abs(a[j] - b[k] ) <= num ){
					int temp = b[k] ;
					b[k] = b[j] ;
					b[j] = temp ;
					break ;
				}
			}
		}
		for(int j = 0 ; j < n ; j++ ){
			cout << b[j] << " " ; 
		}
		cout << endl ;
	}
	
	
	return 0 ;
}


