#include<iostream>
#include<vector>
using namespace std ;


int main(){
	
	int t ;
	cin >> t ;
	while(t--){
		int n ;
		cin >> n ;
		
		if(n%2==0){
			cout << "First" << endl ;
		}else if(n % 3 == 0){
			cout << "Second" << endl;
		}else{
			cout << "First" << endl ;
		}
		
	}
	
	return 0 ;
}

