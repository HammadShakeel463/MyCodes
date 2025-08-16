//https://leetcode.com/problems/valid-palindrome/submissions/971092609/
class Solution {
public:
    bool isPalindrome(string s) {
        string s1 = "" ;
        int n = s.size() ;
        int len = 0 ;
        for(int i = 0 ; i < n ; i++){
            if((s[i] >= 'A' && s[i] <= 'Z' )){
                s1 += tolower(s[i]) ;
                len++ ;
            }else if( (s[i] >= 'a' && s[i] <= 'z' ) || (s[i] >= '0' && s[i] <= '9')){
                s1+= s[i] ;
                len ++ ;
            }
        }
        for(int i = 0 , j = len - 1 ; i < j ; i++,j-- ){
            if(s1[i] != s1[j]){
                return false ; 
            }
        }
        return true ;
    }
}