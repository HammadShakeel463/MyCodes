#include<bits/stdc++.h>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		int a , b , c , d ;
		cin >> a >> b >> c >> d ;
		
		if((a == c && b == d) || (a==d && b == c)){
			cout << "YES" << endl ;
			continue ;
		}
		
		bool flag1 = false ;
		bool flag2 = false ;
		
		for(int i = min(a,b) ; i < max(a,b) ; i++){
			if(c == i){
				flag1 = true ;
			}
			if(d == i){
				flag2 = true ;
			}
		}
		if((flag1 && !flag2) || (!flag1 && flag2)){
			cout << "YES" << endl ;
		}else{
			cout << "NO" << endl ;
		}
	}
	
	
	
	return 0 ;
}


