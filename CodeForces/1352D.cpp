#include<iostream>
#include<vector>
using namespace std ;


void solve(){
	
	int n ;
	vector<int> arr ;
	
	cin >> n ;
	for(int i = 0 ; i < n ; i++){
		int a ;
		cin >> a ;
		arr.push_back(a) ;
	}
	
	int i = 0 , j = n-1 ;
	int prev = 0 ;
	int a_sum = 0 ;
	int b_sum = 0 ;
	int count = 0 ;
	while(j>=i){
		int a = 0 ;
		while(a <= prev && i <= j){
			a += arr[i] ;
			i++ ;
		}
		if(a != 0){
			count ++ ;
		}
		prev = a ;
		int b = 0 ;
		while(b <= prev && i <= j){
			b += arr[j] ;
			j-- ;
		}
		a_sum += a ;
		b_sum += b ;
		prev = b ;
		if(b != 0){
			count ++ ;
		}

	}
	cout << count << " " << a_sum << " " << b_sum << endl  ;
	
}



int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		solve() ;
	}
	
	return 0 ;
}


