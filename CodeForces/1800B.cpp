#include<iostream>
#include<vector>
 
using namespace std ;
 
int main(){
    int t ;
    cin >> t ; 
    
    for(int i = 0 ; i < t ; i++ ){
        
        int len , k , count = 0 ;
        string s ;
        vector<int> arr1 , arr2 ;
        arr1.resize(26,0) ;
        arr2.resize(26,0) ;
        
        cin >> len >> k >> s ;
        
        for(int j = 0 ; j  < len ; j++){
            if(s[j] >= 'A' && s[j] <= 'Z'){
                arr1[int(s[j])-65]++ ;
            }else{
                arr2[int(s[j]) - 97]++;
            }
        }
  
        
        for(int j = 0 ; j < 26 ; j++){
            if(arr1[j] == arr2[j]){
                count += arr1[j] ;
            }else if (arr1[j] > arr2[j]){
                count += arr2[j] ;
                arr1[j] = arr1[j] - arr2[j] ;
                if(arr1[j] / 2 >= k){
                    count = count + k ;
                    k = 0 ;
                }else{
                    count = count + (arr1[j]/2) ;
                    k = k - arr1[j]/2 ;
                }
            }else if(arr1[j] < arr2[j]){
                count += arr1[j] ;
                arr2[j] = arr2[j] - arr1[j] ;
                if(arr2[j] / 2 >= k){
                    count = count + k ;
                    k = 0 ;
                }else{
                    count = count + arr2[j]/2 ;
                    k = k - arr2[j]/2 ;
                }
            }
        }
        
        cout << count << endl ;
    }
    
    
    return 0 ;
}
