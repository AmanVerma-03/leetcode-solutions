class Solution {
    public int maxAscendingSum(int[] nums) {
        int maxSum = nums[0] ;
        int currentSum = nums[0] ;
        int n = nums.length ;
        for(int i = 1 ; i < n ; i++ )
        {
            if(nums[i]>nums[i-1])
            {
                currentSum +=nums[i] ;
            }
            else
            {
                maxSum = Math.max(maxSum,currentSum);
                currentSum = nums[i] ;
            }
        }
        return Math.max(maxSum,currentSum) ;
    }
}