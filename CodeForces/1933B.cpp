#include<iostream>
#include<vector>

using namespace std ;

int main(){
	
	int t; 
	cin >> t ;
	
	while(t--){
		int n ; 
		long int sum = 0 ;
		vector<int> arr ;
		cin >> n ;
		for(int i = 0 ; i < n ; i++ ){
			int a ;
			cin >> a ;
			arr.push_back(a) ;
			sum += a ;
		}
		
		if(sum % 3 == 0){
			cout <<  0  << endl ;
		}else if(sum % 3 == 2){
			cout << 1 << endl ;
		}else{
			int ans = 2 ;
			for(int i = 0 ; i < n ; i++ ){
				if((sum % 3) == (arr[i] % 3 ))
				{
					ans = 1 ;
					break ;
				}
			}
			cout << ans << endl ;
		}
		
	}
	
	
	return 0 ;
}


