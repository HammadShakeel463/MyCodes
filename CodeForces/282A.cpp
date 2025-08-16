#include<iostream>
#include<vector>

using namespace std ;


int main(){
	
	int n ;
	vector<string> s ;
	
	cin >> n ;
	
	for(int i = 0 ; i < n ; i++){
		
		string s1 ;
		cin >> s1 ;
		s.push_back(s1) ;
		
	}
	int x = 0 ;
	for(int i = 0 ; i < n ; i++){
		
		if(s[i][1] == '+'){
			x++ ;
		}else{
			x-- ;
		}
		
	}
	
	cout << x ;
	
	return 0 ;
}


