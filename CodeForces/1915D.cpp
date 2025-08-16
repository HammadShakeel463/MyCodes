#include<iostream>
#include<vector>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		int n ;
		string s ;
		
		cin >> n ;
		cin >> s ;
		
		string s1 = "";
		vector<int> pos ;
		for(int i = n-1 ; i >= 0 ; i--){
			
			if(s[i] == 'a' || s[i] == 'e'){
				pos.push_back(i-1) ;
				i-- ;
			}else{
				pos.push_back(i-2) ;
				i -= 2 ;
				
			}
			
			
		}
		int len = pos.size()-2 ;
		for(int i = 0 ; i < n ; i ++ ){
			if(i == pos[len]){
				cout << "." ;
				len -- ;
			}
			cout << s[i] ;
		}
		cout << endl ;
	}
	
	
	
	return 0 ;
}

