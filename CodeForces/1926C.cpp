#include<iostream>
#include<vector>
using namespace std ;
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	
	while(t--){
		int n ;
		long long int sum = 0 ;
		cin >> n ;
		int num = 10 ;
		int a = 1 ;
		for(int i = 1 ; i <= n ; i++ ){
			if(i / num >= 10){
				num *= 10 ;
				a = 0 ; 
			}
			if(i % num == 0){
				a = i / num  ;
			}
			sum += a;
			a++ ; 
		}
		cout << sum << endl  ;	
	}
	
	
	return 0 ;
}




