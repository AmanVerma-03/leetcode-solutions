class Solution {
    public int longestMonotonicSubarray(int[] nums) {
        int count1 = 1 ;
        int count2 = 1 ;
        int maxcount = 0 ;
        int maxcount2= 0 ;
        int  n = nums.length ; 
        for(int i = 0 ; i < n-1 ; i++)
        {
            if(nums[i] < nums[i+1])
            count1++ ;
            else
            {
                maxcount = Math.max(maxcount,count1);
                count1 = 1 ;
            }
        }
        maxcount = Math.max(maxcount,count1) ;
        for(int i = 0 ; i < n-1 ; i++)
        {
            if(nums[i] > nums[i+1])
            count2++ ;
            else
            {
                maxcount2 = Math.max(maxcount2,count2);
                count2 = 1 ;
            }
        }
          maxcount2 = Math.max(maxcount2,count2) ;
        int mx = 0 ;
        mx = Math.max(maxcount, maxcount2) ;
        return mx ;
    }
}