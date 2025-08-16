//https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.size();
        int count = 1; 
        int max = 1;
        int it = -1 ;
        if(len == 0){
            return 0 ;
        }       
        for(int i = 1 ; i < len ;i++){
           count = 1 ;
            for(int  j = i -1 ; j > it ; j-- ){
                if(s[i] == s[j]){
                    it = j ;
                    break ;
                }
                count++ ;
            }
            if(max < count){
                max = count ;
            }
        }
                
        return max;
        
    }
};
