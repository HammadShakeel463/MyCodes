#include<iostream>
#include<vector>

using namespace std ;


int main(){
	
	int n ; 
	cin >> n ;
	
	for(int i = 0 ; i < n ; i++ ){
		
		string s; 
		cin >> s ;
		int len = s.size() ;
		int max1 = len ;
		int max2 = len ;
		int k = 0 ;
		for(int j = 0 ; j < len ; j++ ){
			
			if(s[k] == s[max1-1]){
				max1-- ;
			}else{
				break ;
			}
			
		}
		k = 0 ;
		for(int j = 0 ; j < len ; j++ ){
			
			if(s[j] == s[len-1]){
				max2-- ;
			}else{
				break ;
			}
			
		}
		int ans ;
		if(max1 == 0 && max2 == 0 )
			ans = -1 ;
		else
			ans = max(max1 , max2) ;
		cout << ans <<  endl ;
		
	}
	
	return 0 ;
}


