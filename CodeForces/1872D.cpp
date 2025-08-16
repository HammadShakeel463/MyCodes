#include<iostream>
#include<vector>

using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	for(int i = 0 ; i < t ; i ++ ){
		
		long int n , x , y ;
		cin >> n >> x >> y ;
		long long int sum_x = 0 ;
		long long int sum_y = 0 ;
		long long int ans = 0 ;
		long int num = n ; 
		for(long int j = x ; j <= n ; j += x ){
			if(j % y != 0){
				sum_x += num ;
				num -- ;
			}
		}
		num = 1 ;
		for(long int j = y ; j <= n ; j+=y ){
			if(j % x != 0){
				sum_y += num ;
				num ++ ;
			}
		}
		ans = sum_x - sum_y ;
		cout << ans << endl ;
	}
	
	
	return 0 ;
}

