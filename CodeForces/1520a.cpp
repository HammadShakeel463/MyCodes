#include<iostream>
#include<vector>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		int n ;
		string s ;
		cin >> n ;
		cin >> s ;
		int arr[26] = {0} ;
		bool flag = true ;
		for(int i = 0 ; i < n ; i++ ){
			if(arr[int(s[i]-'A')] != 0 ){
				flag = false ;
				cout << "NO" << endl;
				break;
			}else{
				arr[int(s[i] - 'A')]++ ;
				int j = i+1 ;
				while(j < n && s[j] == s[i] ){
					arr[int(s[j]-'A')]++;
					j++ ;
				}
				i = j-1 ;
			}
			
		}
		if(flag){
			cout << "YES" << endl ;
		}
		
	}
	
	
	return 0 ;
}

