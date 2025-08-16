#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	while(t--){
		
		int n ;
		string s ;
		
		cin >> n ;
		cin >> s ;
		
		vector<int> arr(26,0) ;
		
		for(int i = 0 ; i < n ; i++){
			arr[int(s[i])-97]++ ;
		}
		
		int m = *max_element(arr.begin(), arr.end()) ; 
		if(m*2>=n){
			cout << m*2 - n << endl ;
		}else{
			if(n%2==0)
				cout << 0 << endl ;
			else
				cout << 1 << endl ;
		}
	}
	
	
	return 0 ;
}

