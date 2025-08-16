#include<iostream>
#include<vector>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		
		int n ;
		vector<int> arr ;
		cin >> n ;
		for(int i = 0 ; i < n ; i++ ){
			int a ;
			cin >> a ;
			arr.push_back(a) ;
		}
		int pos = 0 ;
		int neg = 0 ;
		for(int i = 0 ; i < n ; i++ ){
			if(arr[i] == 1){
				pos++ ;
			}else{
				neg++ ;
			}
		}
		int count = 0 ; 
		if(pos >= neg){
			if(neg % 2 == 0){
				count = 0 ;
			}else{
				count++ ;
			}
		}else{
			count = neg - (n/2) ;
			neg -= count ;
			pos += count ;
			if(neg % 2 != 0){
				count++;
			}
		}
		cout << count << endl ;
	}
	
	return 0 ;
}



