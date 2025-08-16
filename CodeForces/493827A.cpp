#include<iostream>
using namespace std ;

int main(){
	
	int c1 , c2 , h ;
	cin >> c1 >> c2 >> h ;
	
	int c3 = ((4*h) / 10) - (c1+c2) ;
	
	if(c3 < 12){
		cout << 12 << endl ;
	}else if (c3 > 40){
		cout << 40 << endl; 
	}else{
		cout << c3 << endl ;
	}
	
	return 0 ;
}

