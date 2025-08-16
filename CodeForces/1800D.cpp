//https://codeforces.com/contest/1800/problem/D

#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std ;

int has_fun( long int num , int n){
	
	return  num % n ;
}


int main(){
	
	int t ;
	cin >> t ;
	
	for(int i= 0 ; i < t ; i++ ){
		
		string s ;
		int n ;
		cin >> n >> s ;
		long int count = 1 ;
		for(int j = 0 ; j < n ; j ++  ){
			if(j-2 >= 0 && s[j-2] != s[j]){
				count ++ ; 
			}
		}
		
		
		cout << count << endl ;
		
	}
	
	
	
	return 0 ;
	
}


