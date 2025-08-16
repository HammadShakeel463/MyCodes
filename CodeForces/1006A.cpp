#include<iostream>
#include<vector>
using namespace std ;

int main(){
	
	int n;
	vector<long long int> arr ;
	
	cin >> n ;
	for(int i = 0 ; i < n ; i++){
		long long int a ;
		cin >> a ; 
		arr.push_back(a) ;
	}
	
	for(int i = 0 ; i < n ; i++){
		arr[i] -= !(arr[i] % 2 ) ;
	}
	
	for(int i = 0 ; i < n ; i++ ){
		cout << arr[i] << " " ; 
	}
	cout << endl ;
	return 0 ; 
}

