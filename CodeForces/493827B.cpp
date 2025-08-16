#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		int n ;
		vector<int> arr ;
		vector<int> ans ;
		
		cin >> n ;
		for(int i=0 ; i < n ; i++){
			string s ;;
			cin >> s ;
			if(s=="M"){
				arr.push_back(0) ;
			}else if(s[3] == 'L' ){
				arr.push_back(s[0]-'0');
			}else if(s[3] == 'S'){
				arr.push_back('0' - s[0])  ;
				
			}
		}
		sort(arr.begin(), arr.end()) ;
		
		for(int i = 0 ; i < n ; i++ ){
			if(arr[i] < 0 ){
				cout << -arr[i] << "-XS " ;
			}else if(arr[i] > 0){
				cout << arr[i] << "-XL " ;
			}else{
				cout << "M " ;
			}
		}
		cout << endl ;
		
	}
	
	
	return 0 ;
}




