//https://codeforces.com/contest/1798/problem/A

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	for(int i = 0 ; i < t ; i++){
		
		vector<int> a ;
		vector<int> b ;
		int n ;
		cin >> n ;
		
		for(int j = 0 ; j < n ; j++ ){
			int s ;
			cin >> s;
			a.push_back(s) ;
		}
		for(int j = 0 ; j < n ; j++ ){
			int s ;
			cin >> s;
			b.push_back(s) ;
		}
		
		if(a[n-1] < b[n-1]){
			int temp = a[n-1] ;
			a[n-1] = b[n-1] ;
			b[n-1] = temp ;
		}
		bool flag = true ;
		for(int j = 0 ; j < n - 1 ; j++ ){
			if(a[j] > a[n-1]){
				if(b[j] > a[n-1] || a[j] > b[n-1] ){
					cout << "NO" << endl ;
					flag = false ;
					break ;
				}else{
					int temp = a[j] ;
					a[j] = b[j] ;
					b[j] = temp ;			
				}
			}
			if(b[j] > b[n-1]){
				if(a[j] > b[n-1] || b[j] > a[n-1] ){
					cout << "NO" << endl ;
					flag = false ;
					break ;
				}else{
					int temp = a[j] ;
					a[j] = b[j] ;
					b[j] = temp ;			
				}	
				}
			}
		if(flag){
			cout << "YES" << endl ;
		}
		
	}
	
	
	return 0 ;
}



