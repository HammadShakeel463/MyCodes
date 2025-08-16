#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std ;


int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		int n ;
		vector<int> arr ;
		map<int,int> num ;
		cin >> n ;
		for(int i = 0 ; i < n ; i++){
			int a ;
			cin >> a ;
			num[a]++ ;
		}
		
		sort(num.begin(), num.end()) ;
		
		for(int i = 0 ; i < n ; i++){
			
		}
		
	}
	
	
	return 0 ;
}




