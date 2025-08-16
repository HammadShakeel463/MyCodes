//https://codeforces.com/problemset/problem/1796/A
#include<iostream>
#include<vector>
using namespace std ;
#define len 100

// Boyre More's algorithm for pattern matching 
void search(string s1 , string s2 , int n){
    bool flag = false ;
    for(int i = 0 ; i < len-n+1 ; i++){
        int j = 0 ;
        
        while(j < n){
            if(s1[i+j] != s2[j]){
                break ;
            }
            j += 1 ;
        }
        if(j==n){
            flag = true; 
        }
        
    }
    
    if(flag){
        cout <<"YES" ;
    }else{
        cout <<"NO" ;
    }
    cout << endl ;
}


int main(){
    int t ;
    cin >> t ;
    
    for(int i = 0 ; i < t ; i++){
        
        int n ;
        string s ;
        cin >> n >> s;
        
        string fb = "FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFB" ;
        bool flag = false ;
            
        search(fb , s , n) ;
        
    }
    
    return 0;
}

