#include<iostream>
using namespace std ;

int main(){
    int k ;
    string s ;
    cin >> k >> s ;
    int n = s.size() ;
    bool flag = true  ;
    for(int i = 0 , j = n-1; i < j ; i++ , j--){
        
        if(s[i] == '?' && s[j] == '?'){
            s[i] = 'a' ;
            s[j] = 'a' ;
        }else if(s[i] == '?'){
            if(int(s[j] - 97) < k){
                s[i] = s[j] ;
            }else{
                flag = false ;
                break ;
            }
        }else if(s[j] == '?'){
            if(int(s[i] - 97 ) < k){
                s[j] = s[i] ;
            }else{
                flag = false ;
                break ;
            }
        }else if(s[i] != s[j]){
            flag = false ;
            break ;
        }
        
    }
    
    if(flag){
        cout << s ;
    }else{
        cout << "IMPOSSIBLE" ;
    }
    
    return 0 ;
}



