//https://codeforces.com/problemset/problem/1702/D

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;


int main(){
    int t ;
    cin >> t ;
    
    
    for(int i = 0 ; i < t ; i++){
        
        int p ;
        string s;
        vector<int>arr ;
        
		// create the array to store the occurence of each char
		arr.resize(26,0) ;
		
		// take input 
		cin >> s >> p ;
        int n = s.size();
        long int sum = 0 ;
        
        
        // loop through the entire string to store each char's occurence and store the sum 
        for(int j = 0 ; j < n ; j++  ){
            arr[int(s[j]) - 97]++ ;
            sum += int(s[j]) - 97 + 1 ;
        }
        
        // check if the sum is less then p means the requirements are satisfied else do some operation to make array less
        
        if(sum > p){
        	// we start to delete the largest character because it will decrease the sum fast with minimum deletion 
            for(int j = 25 ; j >= 0 ; j-- ){
                if(arr[j] != 0){
        			// delete the character till it become zero in string (being 0 in array means 0 in char in string) or the sum becomes less than or equal to P 
                    while(sum > p && arr[j] != 0){
                        sum -= j+1 ;
                        arr[j]--;
                    }
                    if(sum <= p){
                        break ;
                    }
                }
            }
            
            
            // now iterate over the entire string and to check its occurence and if it is greater than zero than print and decrease in arr else skip the dont print  
            
            for(int j = 0 ; j < n ; j++ ){
                if(arr[int(s[j]) - 97] != 0 ){
                    cout << s[j] ;
                    arr[int(s[j] - 97)]-- ;
                }
            }
            
        }else{
            cout << s ;
        }
        
        cout << endl ;
        
    }
    
    
    
    return 0 ;
}



