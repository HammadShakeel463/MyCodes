#include<iostream>
#include<vector>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		
		int n ;
		vector<string> s ;
		vector<int> arr(26,0);
		cin >> n ;
		
		for(int i = 0 ; i < n ; i++){
			string s1 ;
			cin >> s1 ;
			s.push_back(s1) ;
		}
		
		for(int i = 0 ; i < n ; i++ ){
			int j = s[i].size() - 1 ;
			for( ; j >= 0 ; j--){
				arr[int(s[i][j])-97]++ ;
			}
		}
		bool flag = 1 ;
		for(int i = 0 ; i < 26 ; i++){
			
			if(arr[i] % n != 0){
				flag = 0 ;
				break ;
			}
			
		}
		
		if(flag){
			cout << "YES" << endl ;
		}else{
			cout << "NO" << endl ;
		}
		
	}
	
	
	return 0 ;
}



