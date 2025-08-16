#include<iostream>
#include<vector>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		int n , m ;
		string a , b ;
		cin >> n >> m >> a >> b ;
		int count = 0 ;
		for(int i = 0 , j = 0 ; i < n && j < m ; i++ ){
			bool flag = false ;
			for(; j < m ;j++){
				if(a[i] == b[j]){
					flag = true ;
					j++ ;
					break ;
					
				}
			}
				if(flag == false){
					break ;
				}
				count++ ;
		}
		cout << count << endl ;
	}
	
	
	return 0 ;
}


