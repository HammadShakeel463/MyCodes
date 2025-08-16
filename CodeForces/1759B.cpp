https://codeforces.com/problemset/problem/1759/B

#include<iostream>
#include<vector>
using namespace std ;

int main(){
    
    int t ;
    cin >> t ;
    
    for(int i = 0 ; i < t ; i++){
        
        // sice the max size of the array can be 50 so we can make all the element zero
        vector<int> arr2(51 , 0) ;
        int n , k ;
        cin >> n >> k;
        int max = 0 ;
        // we can take the user input and update the value of that location in the array sice its a permutation
        for(int j = 0 ; j < n ; j++){
            int a ;
            cin >> a ;
            arr2[a] = a ;
            // take tke the max element so we the range of max input value 
            if(a > max){
                max = a ;
            }
        }
        int sum = 0;
        bool flag = false ;
        
        // sum all the value in the range from 1 to max 
        for(int j = 1 ; j <= max ; j++ ){
            if(arr2[j] == 0 ){
                sum = sum + j ;
            }
        }
        
        // check for the condition if it exceed the value of s (user input) then we break else we add the nect value  
        
        if(sum < k){
            for(int j = max+1 ; ; j++ ){
                sum += j ;
            if(sum > k){ 
                break ;
            }else if(sum == k){
                flag = true ;
                break ;
            }
            
        }
        }else if(sum > k){
            flag = false ;
        }else{
            flag = true ;
        }
        
        
        
        
        
        if(flag){
            cout << "YES" << endl ;
        }else{
            cout << "NO" << endl ;
        }
        
    }
    
    
    
    return 0 ;
}


