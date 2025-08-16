#include<iostream>
#include<vector>

using namespace std ;

int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
		
		vector<string> a ;
		int len = 3 ;
		
		for(int i = 0 ; i< len ; i++){
			string s ; 
			cin >> s ;
			a.push_back(s) ;
		} 
		
		for(int i = 0 ; i < len ; i++){
			if(a[i][0] == '?' ){
				if((a[i][1] == 'A' && a[i][2] == 'B') || (a[i][1] == 'B' && a[i][2] == 'A')){
					cout << "C" << endl ; 	
				}else if((a[i][1] == 'A' && a[i][2] == 'C') || (a[i][1] == 'C' && a[i][2] == 'A')){
					cout << "B" << endl; 
				}else{
					cout << "A" << endl ;
				}
				break ;
			}else if(a[i][1] == '?'){
				
				if((a[i][0] == 'A' && a[i][2] == 'B') || (a[i][0] == 'B' && a[i][2] == 'A')){
					cout << "C" << endl ; 	
				}else if((a[i][0] == 'A' && a[i][2] == 'C') || (a[i][0] == 'C' && a[i][2] == 'A')){
					cout << "B" << endl; 
				}else{
					cout << "A" << endl ;
				}
				break ;
			}else if(a[i][2] == '?'){
				if((a[i][1] == 'A' && a[i][0] == 'B') || (a[i][1] == 'B' && a[i][0] == 'A')){
					cout << "C" << endl ; 	
				}else if((a[i][1] == 'A' && a[i][0] == 'C') || (a[i][1] == 'C' && a[i][0] == 'A')){
					cout << "B" << endl; 
				}else{
					cout << "A" << endl ;
				}
				break ;
			}
			
		}
		
	}
	
	
	return 0 ;
}


