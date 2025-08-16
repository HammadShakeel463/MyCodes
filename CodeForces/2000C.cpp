#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;


int main(){
	
	int t ;
	cin >> t;
	
	while(t--){
		int n ;
		cin >> n ;
		vector<long long int> arr ;
		for(int i = 0 ; i < n ; i++ ){
			long int a ;
			cin >> a ;
			arr.push_back(a) ;
		}
		int q ;
		cin >> q ;
		
		while(q--){
			string s ;
			cin >> s ;
			vector<long long int> ar(26, -10000000000) ;
			int n1 = s.size() ;
			if(n1 != n){
				cout << "NO" << endl ;
				continue ;
			}
			bool flag = true ;
			for(int i = 0 ; i < n1 ; i++ ){
				if(ar[int(s[i] - 'a')] == -10000000000){
					ar[int(s[i] - 'a')] = arr[i] ;
				}else if(ar[int(s[i] - 'a')] != arr[i] ){
					flag = false ; 
					
				}
			}
			sort(ar.begin() , ar.end()) ;
			if(flag ){
				for(int i = 1 ; i < 26 ; i++){
					if(ar[i-1] != -10000000000 && ar[i] == ar[i-1]){
						cout << "NO" << endl ;
						flag = false ;
						break ;
					}
				}
				if(flag)
				cout << "YES" << endl ;
			}else{
				cout << "NO" << endl ;
			}
		}
		
	}
	
	
	return 0 ;
}


