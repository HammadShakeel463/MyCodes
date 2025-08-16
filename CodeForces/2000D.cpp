#include<iostream>
#include<vector>

using namespace std ;


int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		int n ;
		string s ;
		vector<int> arr ;
		long long int sum = 0 ;
		long long int ans = 0 ;
		
		cin >> n ;
		for(int i = 0 ; i < n ; i++ ){
			int a ;
			cin >> a ;
			arr.push_back(a) ;
			sum += a ;
		}
		cin >> s ;
		long long int temp = 0 ;
		for(int i = 0, j = n-1  ; i < j ;  ){
			if(s[i] == 'L' && s[j] == 'R'){
				ans += (sum - temp) ;
				temp += arr[i] + arr[j] ;
				j-- ;
				i++ ;
			}else if(s[i] == 'R'){
				temp += arr[i] ;
				i++ ;
			}else if(s[j] == 'L'){
				temp += arr[j] ;
				j-- ;
			}
			
		}
		cout << ans << endl ;
		
	}
	
	
	return 0 ;
}

