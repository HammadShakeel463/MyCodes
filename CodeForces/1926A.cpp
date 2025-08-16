#include<iostream>
#include<vector>

using namespace std ;



int main(){
	int t ;
	cin >> t ;
	
	while(t--){
		string s ;
		cin >> s ;
		
		int ar[2] = {0,0} ;
		
		for(int i = 0 ; i < 5 ; i++){
			ar[int(s[i])-65]++ ;
		}
		
		if(ar[0] > ar[1]){
			cout << "A" << endl ;
		}else{
			cout << "B" << endl ;
		}
		
	}
	
	
	return 0 ;
}



