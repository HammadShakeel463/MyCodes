#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;


int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		int n ;
		cin >> n ;
		vector<int> arr ;
		for(int i = 0 ; i < n ; i++ ){
			int a ;
			cin >> a ;
			arr.push_back(a) ;
		}
		
		int i = 0 , j = n-1 ;
		while(i <= j){
			if(arr[i] == arr[j]){
				i++ ;
				j-- ;
			}else{
				break ;
			}
		}
		
		if(i <= j && i != 0 && arr[i] == arr[i-1]){
			i++ ;
			while(arr[i] == arr[i+1] && i <= j ){
				i++ ;
			}
		}else if(i <= j && j != n-1 && arr[j] == arr[j+1]){
				j-- ;
				while(arr[j] == arr[j-1] && i <= j ){
					j-- ;
				}
		}else{
			i++ ;
		}
		if (i > j){
			cout << 0 << endl ;
		}else
			cout << j - i + 1 << endl ;
		
	}
	
	
	return 0 ;
}


