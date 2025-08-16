#include<iostream>
#include<vector>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	while(t-- ){
		
		int n , k , q ;
		string s ;
		vector<int> l ;
		vector<int> r ;
		vector<int> x ;
		
		cin >> n >> k ;
		cin >> s ;
		
		for(int i = 0 ; i < k ; i++ ){
			int a ;
			cin >> a ;
			l.push_back(a) ;
		}
		
		for(int i = 0 ; i < k ; i++ ){
			int a ;
			cin >> a ;
			r.push_back(a) ;
		}		
		
		for(int i = 0 ; i < q ; i++ ){
			int a ;
			cin >> a ;
			x.push_back(a) ;
		}	
		
		for(int i = 0 ; i < q ; i++ ){
			
			if(l[i] <= x[i] && x[i] <= r[i]){
				a = min(x[i],r[i]+l[i]-x[i])
			} 
			
		}
		
		
		
	}
	
	
	return 0 ;
}


