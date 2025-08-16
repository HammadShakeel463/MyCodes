#include<iostream>
#include<vector>
using namespace std ;

int main(){
	
	int n ;
	cin >> n;
	
	for(int i = 0 ; i < n ; i++ ){
		string s ;
		cin >> s; 
		string s1 = "codeforces" ;
		int count = 0 ;
		for(int j = 0 ; j < 10 ; j++ ){
			
			if(s[j]!= s1[j]){
				count++ ;
			}
		
		}
		
		cout << count << endl ;
		
	}
	
	
	return 0 ;
}




