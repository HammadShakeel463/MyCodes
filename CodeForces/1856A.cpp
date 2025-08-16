#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

int main(){
    
    int t ;
    cin >> t ;
    while(t--){
        
        int n ;
        vector<long int> arr ;
        
        cin >> n ;
        
        for(int i = 0 ; i < n ; i++){
            long int a ;
            cin >> a ;
            arr.push_back(a) ;
        }
     	long long int count = 0 ; 
     	for(int i = n-1 , j = 0 ; i >= 0 ;j++, i--){
     		long int num = *max_element(arr.begin() , arr.end()-j ) ;
     		if(num != arr[i]){
     			count = num ;
     			break ;
			 }
		 }
	    
	    cout << count << endl ;
	    
    }
	
    
    return 0; 
}



