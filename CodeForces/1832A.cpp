//https://codeforces.com/problemset/problem/1832/A
#include<iostream>
#include<vector>
using namespace std ;

int main(){
	
	int n ;
	cin >> n ;
	
	for(int i = 0 ; i < n ; i++ ){
		string s ;
		cin >> s; 
		int len ;
		vector<int> arr(26 , 0) ;
		len = s.size() ;
		
		for(int j = 0 ; j < len ; j++ ){
			arr[int(s[j] - 97)] ++ ;
		}
		
		
		int even = 0 , odd = 0 ; 
		
		for(int j = 0 ; j < 26 ; j++ ){
			if(arr[j] == 0){
				continue ; 
			}else if(arr[j] % 2 == 0){
				even ++ ;
			}else{
				if(arr[j] > 2)
					even ++;
				odd ++ ;
			}
		}
		
		if(even > 1 && (odd == 1 || odd == 0)){
			cout << "YES" << endl ;
		}else{
			cout << "NO" << endl ;
		}
		
	}
	
	
	return 0 ;
}


