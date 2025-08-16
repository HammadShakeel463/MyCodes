#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	while(t--){
		int n , k , f ;
		vector<int> arr ;
		
		cin >> n >> f >> k ; 
		for(int i = 0 ; i < n ; i++ ){
			int a ;
			cin >> a ;
			arr.push_back(a) ;
		}

		int fav = arr[f-1] ;
		sort(arr.begin() , arr.end(), greater<int>()) ;
		bool flag1 = false ;
		bool flag2 = false ;
		for(int i = 0 ; i < k ; i++ ){
			if(arr[i] == fav){
				flag1 = true ;
				break ;
			}
		}
		for(int i = k ; i < n ; i++ ){
			if(arr[i] == fav){
				flag2 = true ;
				break ;
			}
		}
		
		if(flag1 == true && flag2 == true ){
			cout << "MAYBE" << endl; 
		}else if(flag1 == true && flag2 == false){
			cout << "YES" << endl ;
		}else{
			cout << "NO" << endl ;
		}
		
	}
	
	
	return 0 ;
}


