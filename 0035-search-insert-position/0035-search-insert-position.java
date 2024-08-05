class Solution {
    public int searchInsert(int[] nums, int target) {
        int low = 0 ; 
        int s = nums.length ;
        int high = s-1 ;
        int ans = s ;
        while(low<=high)
        {
            int mid = (low+high)/2 ;
            if(nums[mid] >= target)
            {
                ans = mid ;
                high = mid-1 ;
            }
            else
            low = mid+1 ;
        }
        return ans ;
    }
}