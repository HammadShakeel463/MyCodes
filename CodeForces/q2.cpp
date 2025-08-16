# https://codeforces.com/contest/1789/problem/B


#include<iostream>
#include<vector>

using namespace std ;


int main(){
    
    int t ;
    cin >> t ;
    
    for(int i = 0 ; i < t ; i++ ){
        int n ;
        string s ;
        cin >> n;
        cin >> s;
        int j , k ;
    
    
    # divide or in other words check the array in three parts 
    
     # 1. check the aray the array makes is same from start and end    
        for(j = 0 , k = n-1 ; j < k ; k-- , j++){
            if(s[j]!=s[k]){
                break ;
                
            }
            
        }
        # check how many many elements are not equal the reason for this is because we have to change #a subset only one time 
        for( ; j < k ; j++ , k-- ){
            if(s[j] == s[k]){
                j++;
                k--;
                break ;
            }
        }
        
        bool flag = true ;
        
        # since we have the subset that have to be change now we check if we again find the subset that is not equal if found such subset we break the loop and print no
        
        for( ; j < k ; j++ , k--){
            if(s[k] != s[j]){
                flag = false ;
                break ;
            }
        }
        
        if(flag){
            cout << "YES" ;
        }else{
            cout << "NO" ;
        }
        cout << endl;
    }
    
    
    return 0 ;
}

