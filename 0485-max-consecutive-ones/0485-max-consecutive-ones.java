class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int count = 0 ;
        int max1 = 0 ;
        int n = nums.length ;
        for(int i = 0 ; i < n ; i ++)
        {
            if(nums[i]==1 )
            {
                count++ ;
                max1 = Math.max(max1 , count);
            }
            else
            count =  0 ;
        }
      
      return max1;
    }
}