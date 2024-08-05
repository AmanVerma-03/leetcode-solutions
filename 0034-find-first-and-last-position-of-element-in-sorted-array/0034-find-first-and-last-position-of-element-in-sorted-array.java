class Solution {
    public int[] searchRange(int[] nums, int target) {
        int low = 0;
        int n = nums.length;
        int high = n - 1;
        int [] ans = new int[2];
        ans[0]= -1 ;
        ans[1] = -1 ;
        
      
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                ans[0] = mid;
                high = mid - 1;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
       
        low = 0;
        high = n - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                ans[1] = mid;
                low = mid + 1;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return ans;
    }
}