//https://www.hackerrank.com/challenges/counter-game/problem?isFullScreen=true
int b_search(vector<long int> arr , int ind , long int n ){
    int i = 0 ;
    int mid = (i+ind) / 2 ;
    if(n >= arr[mid]){
        for(int i = mid ; i <= ind ; i++ ){
            if(n == arr[i] ){
                return i ;
            }else if(n < arr[i]){
                return i - 1 ;
            } 
        }
    }else{
        for(int i = 0 ; i <= mid ; i++ ){
            if(n == arr[i] ){
                return i ;
            }else if(n < arr[i]){
                return i - 1 ;
            } 
        }
    }
    
}

string counterGame(long n) {
    if(n == 1){
        return "Richard" ;
    }else{
        vector<long int> arr ;
        long long int num = 2 ;
        int ind ;
        arr.push_back(1) ;
        while(num < n){
            arr.push_back(num) ;
            num = num * 2 ;
            cout << num << " " ;
        }
        ind = arr.size() - 1 ;
        cout << arr[ind] << " " ;
        char tern = 'l' ;
        while(1){
            if(n == arr[ind]){
                if(ind % 2 == 0){
                    if(tern == 'l'){
                        return "Richard" ;
                    }else{
                        return "Louise" ;
                    }
                }else{
                    if(tern == 'l'){
                        return "Louise" ;
                    }else{
                        return "Richard" ;
                    }
                }
            }else{
                n = n - arr[ind] ;
                cout << arr[ind] << " " ;
                if(n == 1){
                    if(tern == 'l'){
                        return "Louise";
                    }else{
                        return "Richard";
                    }
                }
                ind = b_search(arr, ind, n) ;
                if(tern == 'l'){
                    tern = 'r' ;
                }else{
                    tern = 'l' ;
                }
            }
            
            
        } 
    }
    cout << endl;
    return "" ;
}

