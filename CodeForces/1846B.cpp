#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	for(int i = 0 ; i < t ; i++){
		
		vector<string> s ;
		
		for(int j = 0 ; j < 3 ; j++){
			string s1 ;
			cin >> s1 ;
			s.push_back(s1) ;
		}
		
		map<char,int> arr ;
		arr['+'] = 0 ;
		arr['O'] = 0 ;
		arr['X'] = 0 ;
		for(int j = 0 ; j < 3 ; j++ ){
			for(int k = 0 ; k < 3 ; k++){
				if(s[j][k] != '.'){
					arr[s[j][k]] ++ ;
				}
			}
			
			if(arr['+'] < 3){
				arr['+'] = 0 ;
			}
			if(arr['O'] < 3){
				arr['O'] = 0 ;
			}
			if(arr['X'] < 3){
				arr['X'] = 0 ;
			}
			
		}
		
		for(int j = 0 ; j < 3 ; j++ ){
			if(s[j][j] != '.'){
				arr[s[j][j]] ++ ;
			}
		}
		if(arr['+'] < 3){
			arr['+'] = 0 ;
		}
		if(arr['O'] < 3){
			arr['O'] = 0 ;
		}
		if(arr['X'] < 3){
			arr['X'] = 0 ;
		}
		for(int j = 0 ; j < 3 ; j++ ){
			for(int k = 0 ; k < 3 ; k++){
				if(s[k][j] != '.'){
					arr[s[k][j]] ++ ;
				}
			}
			if(arr['+'] < 3){
				arr['+'] = 0 ;
			}
			if(arr['O'] < 3){
				arr['O'] = 0 ;
			}
			if(arr['X'] < 3){
				arr['X'] = 0 ;
			}
		}
		
		if((arr['+'] >= 3 && arr['O'] >= 3) || (arr['+'] >= 3 &&  arr['X'] >= 3) || (arr['X'] >= 3 && arr['O'] >= 3)){
			cout << "DRAW" << endl ;
		}else{
			if(arr['+'] >= 3 ){
				cout << "+" << endl ;
			}else if(arr['O'] >= 3 ){
				cout << "O" << endl ;
			}else if(arr['X'] >= 3 ){
				cout << "X" << endl ;
			}else{
				cout << "DRAW" << endl ;
			}
		} 
		
	}
	
	
	return 0 ;
}




