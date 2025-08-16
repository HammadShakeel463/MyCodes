//https://codeforces.com/contest/1802/problem/A
#include<iostream>
#include<vector>
#include<iterator> // for iterators

using namespace std ;


int main(){
    
    int t ;
    cin >> t ;
    
    for(int i = 0 ; i < t ; i++ ){
        
        int num ;
        cin >> num ;
        
        vector<int> arr ;
        int even = 0 , odd = 0 ;
        for(int j = 0 ; j < num ; j++){
            int a ;
            cin >> a; 
            if(a < 0){
                odd ++ ;
            }else{
                even++ ;
            }
            arr.push_back(a) ;
        }
        
        vector<int> m ;
        int j ;
        for( j = 1 ; j <= even ; j++){
            m.push_back(j) ;
        }
        j-- ;
        for(int k = 1 ; k <= odd ; k++ ){
         j--;
         if(j > 0)
         m.push_back(j) ;
         else
         m.push_back(0) ;
        }
        
        j = 1;
        vector<int> mn ;
        for(int k = 0 ; k < num ; k++ ){
            if(even <= 0){
                mn.push_back(0) ;
            }else if (odd <= 0 ){
                mn.push_back(j) ;
                j++ ;
            }else if(odd > 0 && even > 0){
                if( k % 2 != 0){
                    mn.push_back(0) ;
                    odd-- ;
                }else{
                    mn.push_back(1) ;
                    even++ ;
                }
            }
        }
        vector<int>::iterator it = m.begin() ;
        while(it != m.end()){
            cout << *it << " " ;
            it++ ;
        }
        cout << endl ;
        it = mn.begin() ;
        while(it != mn.end()){
            cout << *it << " " ;
            it++ ;
        }
        cout << endl ;
        
    }
    
    
    return 0 ;
}


