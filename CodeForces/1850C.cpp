#include<iostream>
#include<vector>

using namespace std ;


int main(){
	int t ;
	cin >> t ;
	
	for(int i = 0 ; i < t ; i++){
		vector<string> arr ;
		int len = 8 ;
		
		for(int j = 0 ; j < len ; j++){
			string a ;
			cin >> a ;
			arr.push_back(a) ;
		}
		bool flag = true ;
		for(int j = 0 ; j < 8 && flag ; j++ ){
			for(int k = 0 ; k < 8 ; k++){
				if(arr[j][k] >= 'a' && arr[j][k] <= 'z'){
					flag = false ;
					for(int l = j ; l < len && arr[l][k] != '.' ; l++){
						cout << arr[l][k] ;
					}
				}
			}
		}
		cout << endl ;
		
		
	}
	
	
	return 0 ;
}

