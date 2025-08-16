#include<iostream>
#include<vector>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		string s ;
		int n ;
		cin >> n ;
		cin >> s ;
		int count = 0 ;
		for(int i = 0 ; i < n - 2  ; i++ ){
			if(i < n - 4 &&  s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p' && s[i+1] == 'i' && s[i+2] == 'e'){
				i += 3 ;
				count++ ;
			}else if(s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e'){
				i += 2 ;
				count++ ;
			}else if(s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p'){
				i++ ;
				count++ ;
			}
		}
		cout << count << endl ;
	}
	
	
	return 0 ;
}

