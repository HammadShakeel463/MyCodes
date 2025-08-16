#include<iostream>
#include<vector>

using namespace std ;



int main(){
	
	int t; 
	cin >> t;
	
	for(int i = 0 ; i < t ; i ++ ){
		
		long int n ; 
		vector<long long int> arr ;
		
		cin >> n ;
		for(long int j = 0 ; j < n ; j++ ){
			long long int a; 
			cin >> a; 
			arr.push_back(a) ;
		}
		long long int sum = 0 ;
		long long int count = 0 ;
		for(int j = 0 ; j < n ; j++ ){
			bool flag = true ;
			if(arr[j] >= 0 ){
			    sum += arr[j] ;	
			}else{
			while(j < n &&  arr[j] <= 0){
				sum += (-1 * arr[j]) ;
				j++ ;
				if(flag){
					count++ ;
					flag = false ;
				}
			}
			if(j < n &&  arr[j] > 0){
				sum += arr[j] ;
			}
		}
			
		}
		
		cout << sum << " " << count << endl ; 
	}
	
	
	return 0 ;
}




