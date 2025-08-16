//https://codeforces.com/problemset/problem/609/B

#include<iostream>
#include<vector>
#include<set>
#include<iterator>
using namespace std ;


int main(){
	
	int n ,m ;
	vector<int> arr ;
	long int sum = 0 ;
	cin >> n >> m ;
	vector<int> a(m,0) ;
	for(int i = 0 ; i < n ; i++ ){
		int x ;
		cin >> x ;
		arr.push_back(x) ;
	}
	
	for(int i = 0 ; i < n ; i++ ){
		a[arr[i]-1] ++ ;
	}
	
	int count = 0 ;
	for(int i = 0 ; i < n ; i++){
		count += (n-i) - a[arr[i]-1] ;
		a[arr[i]-1] -- ;
	}
	
	cout << count ;
	
	return 0 ;
}

