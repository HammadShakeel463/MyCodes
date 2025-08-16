#include<iostream>
#include<vector>

using namespace std ;

using namespace std ;

void printlcs(vector<vector<char> > st , string s , int i , int j ){
	
	if (i == 0 || j == 0 ){
		return ;
	}
	
	if(st[i-1][j-1] == '/' ){
		printlcs(st , s , i-1 , j -1 ) ;
		cout << s[i-1] ;
	}else if(st[i-1][j-1] == '|'){
		printlcs(st , s , i-1 , j) ;
	}else{
		printlcs(st , s , i , j-1) ;
	}
	
}


int main(){
	
	string s1 , s2 ;
	cin >> s1  >> s2 ;
	int len1 = s1.size() , len2 = s2.size() ;
	
	vector<vector<int> > arr(len1+1) ; 
	vector<vector<char> > st(len1)  ;
	
	for(int i = 0 ; i <= len1 ; i++){
		arr[i].resize(len2+1) ;
		if(i<len1)
		st[i].resize(len2) ;
		arr[i][0] = 0 ;
	}
	
	for(int i = 0 ; i < len2 ; i++ ){
		arr[0][i] = 0 ;
	}
	
	
	
	for(int i = 1 ; i <= len1 ; i++){
		
		for(int j = 1 ; j <= len2 ; j++ ){
			
			if(s1[i-1] == s2[j-1]){
				arr[i][j] = arr[i-1][j-1] + 1 ;
				st[i-1][j-1] = '/' ;
			}else if(arr[i][j-1] >= arr[i-1][j]){
				arr[i][j] = arr[i][j-1] ;
				st[i-1][j-1] = '-' ;
			}else{
				arr[i][j] = arr[i-1][j] ;
				st[i-1][j-1] = '|' ;
			}
			
		}
		
	}
	
	
	for(int i = 0 ; i <= len1 ; i++ ){
		for(int j = 0 ; j <= len2 ; j++ ){
			cout << arr[i][j] << " " ;
		}
		cout << endl ;
	}
	
	
	printlcs(st , s1 , len1 , len2 ) ;
	
	return 0 ;
}




