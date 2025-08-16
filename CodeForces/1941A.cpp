#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int main(){
	
	int t; 
	cin >> t ;
	while(t-- ){
		int n , m , k ;
		vector<int> b ;
		vector<int> s ;
		cin >> n >> m >> k ;
		
		for(int i = 0 ; i < n ; i++){
			int a ;
			cin >> a ;
			b.push_back(a) ;
		}
		
		for(int i = 0 ; i < m ; i++){
			int a ;
			cin >> a ;
			s.push_back(a) ;
		}
		sort(s.begin(), s.end());
		sort(b.begin(), b.end());
		long int count = 0 ;
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j <m ; j++ ){
				if(b[i]+s[j] <= k){
					count++ ;
				}else{
					break ;
				}
			}
		}
		cout << count << endl ;
	}
	
	
	return 0 ;
}





