#include<iostream>
#include<vector>
using namespace std ;


int main(){
	
	long int n;
	vector<int> arr ;
	
	long long sum = 0 ;
	
	cin >> n ;
	for(int i = 0 ; i < n ; i++){
		int a ;
		cin >> a ;
		arr.push_back(a) ;
		sum += a ;
	}
	vector<int> ans ;
	int avg = sum / n ;
	
	for(int i =0 ; i < n ; i++ ){
		
		if(arr[i] == avg){
			 ans.push_back(i+1) ;
		}
		
	}
	int len = ans.size()  ;
	cout << len << endl ;
	for(int i = 0 ; i < len ; i++ ){
		cout << ans[i] << " " ;
	}
	return 0;
}
