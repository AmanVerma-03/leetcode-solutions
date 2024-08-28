class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1 ;
        int  n = nums.size() ;
        for(int i = n-2 ; i >=0 ; i--)
        {
            if(nums[i] < nums[i+1])
           {
               ind = i ;
               break ;
           } 
        }

         if (ind == -1) {
            reverse(nums.begin(), nums.end());
        } else {
            // Find the smallest element greater than nums[ind] from the right
            for (int i = n - 1; i > ind; i--) {
                if (nums[i] > nums[ind]) {
                    swap(nums[i], nums[ind]);
                    break;
                }
            }

            // Reverse the subarray from ind + 1 to the end
            reverse(nums.begin() + ind + 1, nums.end());
        }
       
    }
};