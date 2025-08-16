//https://leetcode.com/problems/longest-palindromic-substring/description/
class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.size() ;
        bool arr[len][len] ;
        int ans[2] = {0,0} ;
        for(int i = 0 ; i < len ; i++ ){
            for(int j = i ; j < len ; j++ ){
                arr[i][j] = false  ;
            }
            
        }
        for(int i = 0  ; i < len ; i++ ){
            arr[i][i] = true ;
        }
        
        for(int i = 0 ; i < len - 1  ; i++ ){
            if(s[i] == s[i+1]){
                arr[i][i+1] = true ;
                ans[0] = i;
                ans[1] = i+1;
            }
        }

        for(int i = 2 ; i < len ; i++ ){
            for(int j = 0 ; j < len - i ; j++){
                int k = j + i ;
                if(arr[j+1][k-1] == true && s[j] == s[k] ){
                    arr[j][k] = true ;
                    ans[0] = j;
                    ans[1] = k;
                }
            }  
        }

        return s.substr(ans[0],ans[1]-ans[0]+1) ;
    }
};