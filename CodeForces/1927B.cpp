#include<iostream>
#include<vector>

using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		int n ;
		vector<int> arr ;
		vector<int> ar(26,0) ;
		string s = "" ;
		cin >> n ;
		for(int i = 0 ; i < n ; i++){
			int a;
			cin >> a ; 
			arr.push_back(a) ;
		}
		
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < 26 ; j++ ){
				if(arr[i] >= ar[j]){
					s = s + char(97+j) ;
					ar[j]++ ;
					break ;
				}
			}
		}
		cout << s << endl ;
	}
	
	return 0 ;
}


