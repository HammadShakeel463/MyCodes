//https://www.hackerrank.com/challenges/absolute-permutation/problem?isFullScreen=true

vector<int> absolutePermutation(int n, int k) {
    vector<int> ans(n,0) ;
    
    for(int i = 1 ; i <= n ; i++){
        int pos = i + k ; 
        if(i-k > 0 && ans[i-k-1] == 0 ){
            ans[i-k-1] = i ;
        }else if(i+k <= n && ans[i+k-1] == 0){
            ans[i+k-1] = i ;
        }else{
            vector<int> n ;
            n.push_back(-1) ; 
            return n ;
        }
    }
    cout << endl ;
    for(int i = 0 ; i < n ; i++){
       if(abs(ans[i] - (i+1)) != k || ans[i] == 0 ){
           vector<int> n ;
           n.push_back(-1) ;
           return n ;
       }
    }

    return ans ;
}
