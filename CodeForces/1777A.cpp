//https://codeforces.com/problemset/problem/1777/A


#include<iostream>
#include<vector>
using namespace std ;

int main(){
    int t ;
    cin >> t ;
    
    for(int i = 0 ; i < t ; i++ ){
        int n ;
        vector<long long int> arr ;
        cin >> n ;
        for(int j = 0 ; j < n ; j++){
            long long int a ;
            cin >> a; 
            arr.push_back(a) ;
        }
        long long int count = 0 ;
        long long int num = arr[0] ;
        for(int j = 1 ; j < n ; j++){
            
            if((num % 2 == 0 && arr[j] % 2 == 0) || (arr[j] % 2 != 0 && num % 2 != 0) ){
                num = num * arr[j] ;
                count++; 
            }else{
                num = arr[j] ;
            }
            
        }
        cout << count << endl ;
        
    }
    
    
    return 0 ;
}



