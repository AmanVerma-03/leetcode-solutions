class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int low = 0 ;
         int high = nums.size()-1 ;
         int maxpairsum = 0 ;
         sort(nums.begin(), nums.end());
         while(low<=high)
         {
           int pairsum = nums[low] + nums[high] ;
          maxpairsum = max(maxpairsum , pairsum) ;
          low++ ;
          high-- ;
         }
  return maxpairsum ;

    }
   
 
};