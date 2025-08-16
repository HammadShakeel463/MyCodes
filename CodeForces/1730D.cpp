#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

bool cmp(const string lhs, const string rhs) {
   return lhs.length() > rhs.length();
}

int main(){
    
    int t ;
    cin >> t ;
    
    for(int i = 0 ; i < t ; i++){
        
        int n ;
        vector<string> s ;
        cin  >> n ;
        char ans[n] ;
        for(int j = 0 ; j < n ; j++){
            string s1 ;
            cin >> s1 ;
            s.push_back(s1) ;
            ans[j] = '0' ;
        }
        
        for(int j = 0 ; j < n ; j++ ){
            bool flag = true;
            for(int k = 0 ; k < n && flag ; k++){
            	if(k==j)
            		continue;
                for(int l = 0 ; l < n ; l++ ){
                	
                    if(s[j] == s[k]+s[l] || s[j] == s[l]+s[k]){
                        flag = false ;
                        ans[j] = '1' ;
                        break ;
                    }
                }
                
            }
            cout << ans[j] ;
        }
    	cout << endl ;
    }
    
    return 0 ;
}



