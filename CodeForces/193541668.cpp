#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int main(){
    
    int t ;
    cin >> t ;
    for(int i = 0 ; i < t ; i++ ){
        
        int len ;
        vector<int> arr ;
        vector<int>arr2 ; 
        cin >> len ;
        
        for(int j =0  ; j < len ; j++ ){
            int a ;
            cin >> a ;
            arr.push_back(a) ;
            arr2.push_back(a) ;
        }
        
        sort(arr.begin() , arr.end()) ;
        int j = 0 , k = len - 1 , ptr1 = 0 , ptr2 = len - 1;
        for(; j != k ;  ){
            
            if(arr2[j] == arr[ptr1] ){
                ptr1 ++ ;
                j++ ;
                continue ;
            }else if(arr2[k] == arr[ptr1]){
                ptr1 ++ ;
                k-- ;
                continue ;
            }
            if(arr2[j] == arr[ptr2] ){
                ptr2-- ;
                j++ ;
                continue ;
            }else if(arr2[k] == arr[ptr2]){
                ptr2-- ;
                k-- ;
                continue ;
            }
            break ;
            
        }
        if(k!=j){
            cout << j+1 << " " << k+1 << endl ; 
        }else{
            cout << -1 << endl ;
        }
        
    }
    
    
    return 0 ;
}
 