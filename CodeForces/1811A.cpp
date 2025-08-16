#https://codeforces.com/contest/1811/problem/A


#include<iostream>
#include<vector>
#include<string>
using namespace std ;


int main(){
    int t ;
    cin >>  t ;
    
    for(int i = 0 ; i < t ; i++ ){
        string s ;
        int n , d  ; 
        cin >> n >> d >> s ;
        int j ;
        for(j = 0 ; j < n ; j++ ){
            if(int(s[j] - 48 ) < d){
                break ;
            }
        }
        
        s = s.substr(0,j) + to_string(d) + s.substr(j,n) ;
        cout << s << endl ;
        
    }
    
}


