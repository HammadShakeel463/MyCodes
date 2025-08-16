#include<iostream>
#include<vector>

using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		long int a , b , c ;
		cin >> a >> b >> c ;
		long long int sum = 0 ;
		sum += a ;
		int x = 0;
		if(b % 3 == 0){
			sum += (b / 3 ) ;
		}else{
			x = 3 - b % 3 ;
			if (x > c ){
				cout << -1 << endl ;
				continue ;
			}
			c -= x ;
			sum += (b+x/3) ;
		}
		sum += ((c-x+2)/3) ;
		
	cout << sum << endl; 
	}
	
	
	return 0; 
}





