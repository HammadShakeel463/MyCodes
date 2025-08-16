#include<iostream>
#include<vector>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	for(int i = 0 ; i < t ; i++ ){
		
		vector<int> a;
		vector<int> b;
		int n ;
		cin >> n ;
		
		for(int j = 0 ; j < n ; j++ ){
			int num ;
			cin >> num ;
			a.push_back(num) ;
		}
		for(int j = 0 ; j < n ; j++ ){
			int num ;
			cin >> num ;
			b.push_back(num) ;
		}
		
		int ptr = 0 ;
		int count = 0 ;
		for(int j = 0; j < n ; j++){
			bool flag = true ;
			for(int k = 0 ; k < n ; k++){
				if(a[j] == b[k] ){
				    if(k-j > 0){
				    	cout << "k " << k << endl ;
				        count = max(count , k) ;
				    }
				    break ;
				}
			}
		}
		
		cout << count << endl ;
	}
	
	return 0 ;
}

