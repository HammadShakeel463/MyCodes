//https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/?envType=study-plan-v2&id=top-interview-150
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int num = 0 ;
        int ans = 0 ;
        int size = nums.size() ;
        for(int i = 0 ; i < size - 1 ; i++ ){
            if(nums[i] == nums[i+1] && num == 0){
                num ++ ;
            }else if(nums[i] == nums[i+1] && num > 0 ){
                int j = i+1 ;
                while(j < size && nums[i] == nums[j]){
                    nums[j] = 10000000 ; 
                    j++;
                }
                i = j-1 ;
                num = 0 ;
            }else{
                num = 0 ;
            }
        }
        sort(nums.begin() , nums.end()) ;

        for(int i = 0 ; i < size ; i++ ){
            if(nums[i] == 10000000){
                break ;
            }else{
                ans = i  ;
            }
        }
        cout << ans ;
        return ans+1 ;
        
    }
};