//https://leetcode.com/problems/container-with-most-water/description/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxx = 0 ;
        int n = height.size() ;
        for(int i = 0 , j = n-1 , k = 1 ; i < j ; k++ ){
            if(height[i] > height[j] ){
                maxx = max(maxx , height[j]*(n-k)) ; 
                j-- ;

            }else{
                maxx = max(maxx , height[i]*(n-k)) ; 
                i++ ;
            }
    
        }

        return maxx ;

    }
}