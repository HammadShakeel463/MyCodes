#include<iostream>
#include<vector>

using namespace std ;


int main(){
	
	int t ;
	cin >> t ;
	
	for(int i = 0 ; i < t ; i ++ ){
		
		int a , b , c ;
		cin >> a >> b >> c;
		
		int count = 0 ; 
		
		if(a > b){
			while(a > b){
				a -= c ;
				b += c ;
				count ++ ;
			}
		}else if( b > a ){
			while(b > a){
				a += c ;
				b -= c ;
				count ++ ;
			}			
		}
		cout << count << endl ;
	}
	
	
	return 0; 
}

