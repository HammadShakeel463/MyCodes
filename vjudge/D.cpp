#include<iostream>
#include<map>
#include<algorithm>
using namespace std ;

int main(){
	
	int n ;
	
	map<int,int> ar ; 
	
	cin >> n ;
	for(int i = 0 ; i < n ; i++ ){
		int a ;
		cin >> a ;
		ar[a]++ ; 
	}
	map<int,int>::iterator it = ar.begin() ;
	int m = it->second ;
	it++ ;
	while(it != ar.end()){
		
		if(it->second > m){
			m = it->second ;
		}
		
		it++ ;
	}
	
	cout << m  << " " << ar.size() << endl ;
	
	
	return 0 ;
}


