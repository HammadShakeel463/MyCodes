#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int main(){
	
	int t ;
	cin >> t; 
	
	for(int i = 0 ; i < t ; i++){
		
		int n , k ;
		cin >> n >> k ;
		vector<int> arr ;
		
		for(int j = 0 ; j < n ; j++ ){
			int a ;
			cin >> a ;
			arr.push_back(a) ;
		}
		
		sort(arr.begin() , arr.end()) ;
		int m = 0 , curr = 0 , count = 0 ;
		int j = 0;
		for( ; j < n-1 ; j++){
			if(arr[j+1] - arr[j] > k ){
				j++ ;
				m = curr + 1 ;
				break ;
			}else{
				curr++ ; 
			}
		}
		curr = 0 ;
		for( ; j < n-1 ; j++){
			if(arr[j+1] - arr[j] > k ){
				m = min(curr , m ) ;
				count = m + count ;
			}else{
				curr++ ; 
			}
		}
		cout << count << endl ;
	}
	
	
	return 0 ;
}


