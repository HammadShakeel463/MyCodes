#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std ;

int main(){
	
	int t ;
	cin>> t ;
	
	while(t--){
		int x ;
		int y ;
		cin >> x ;
		y = 1 ;
		int m = 1 ;
		int ans = 1; 
		while(y < x){
			int temp = __gcd(x,y) + y ;
			if(m < temp){
				m = temp ;
				ans = y ;
			}
			y++ ;
		}
		cout << ans << endl ;
	}
	
	return 0 ;
}



