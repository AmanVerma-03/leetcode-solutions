class Solution {
    public int singleNonDuplicate(int[] nums) {
        int low = 0;
        int high = nums.length - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // Check if mid is even or odd
            boolean isEven = (mid % 2 == 0);

            if (mid + 1 < nums.length && nums[mid] == nums[mid + 1]) {
                if (isEven) {
                    // Single element is in the right half
                    low = mid + 2;
                } else {
                    // Single element is in the left half
                    high = mid - 1;
                }
            } else if (mid - 1 >= 0 && nums[mid] == nums[mid - 1]) {
                if (isEven) {
                    // Single element is in the left half
                    high = mid - 2;
                } else {
                    // Single element is in the right half
                    low = mid + 1;
                }
            } else {
                // mid itself is the single non-duplicate
                return nums[mid];
            }
        }
        
        // After the loop, low and high should converge to the single element
        return nums[low];
    }
}
