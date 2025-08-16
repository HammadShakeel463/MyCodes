//https://leetcode.com/problems/next-permutation/description/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size() ;
        bool flag = true ;
        for(int i = n-1 ; i > 0 ; i-- ){
            if(nums[i] > nums[i-1]){
                flag = false ;
                int ind = i ;
                int m = nums[i] ;
                for(int j = i+1 ; j < n ; j++ ){
                    if(m > nums[j] && nums[j] > nums[i-1]){
                        m = nums[j] ;
                        ind = j ;
                    }
                }
                nums[ind] = nums[i-1]  ;
                nums[i-1] = m ;
                sort(nums.begin()+i , nums.end()) ;
                break ;
            }
        }
        if(flag){
            reverse(nums.begin() , nums.end()) ;
        }
        for(int i = 0 ; i < n ; i++ ){
            cout << nums[i] << " " ;
        }
        cout << endl ;
    }
};