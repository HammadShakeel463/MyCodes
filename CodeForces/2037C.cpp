#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std ;

bool is_prime(int n ){
	double p = pow(double(n) , double(0.5)) ;
	for(int i = 2 ; i <= int(p) ; i++){
		if(n % i == 0){
			return 1 ;
		}
	}
	return 0 ;
}


int main(){
	int t ;
	cin >> t ;
	while(t--){
		int n ; 
		cin >> n ;
		int odd = 1 ;
		if(n < 5){
			cout << -1 << endl ;
			continue ;
		}
		for(int i = 1 ; i <= n ; i++){
			if(i % 2 == 1 ){
				odd = i ;
				cout << i << " " ;
			}
		}
		int even = 2 ;
		for(int i = 2 ; i <= n ; i++){
			if(i % 2 == 0 && is_prime(i+odd)){
				even = i ;
				cout << even << " " ;
				break ;
			}
		} 
		for(int i = 2 ; i <= n ; i++ ){
			if(i % 2 == 0 && i != even){
				cout << i << " " ;
			}
		}
		cout << endl ;
	}
	return 0 ;
}
