//https://codeforces.com/contest/1810/problem/C

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	for(int i = 0 ; i < t ; i++ ){
		
		int n , c , d ;
		vector<int > arr ;
		cin >> n >> c >> d;
		
		for(int j = 0 ; j < n ; j++ ){
			int a ;
			cin >> a ;
			arr.push_back(a) ;
		}
		
		sort(arr.begin() , arr.end()) ;
		
		int count1 = 0 ;
		int count2 = 0 ;
		
		for(int j = 1 ; j < n ; j++){
			
			if(arr[j] == arr[j-1]){
				count2++ ;
			}else if(arr[j] != arr[j-1] + 1){
				count1 += (arr[j] - arr[j-1] - 1) ;
			}
		}
		
		
		int ans = min(count1 * c , count2 * d) ;
		
		
		cout << ans << endl ;
		
	}
	
	
	
	return 0 ;
}



