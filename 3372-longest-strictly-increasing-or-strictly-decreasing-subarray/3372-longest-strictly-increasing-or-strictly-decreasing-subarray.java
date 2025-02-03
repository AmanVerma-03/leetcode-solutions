class Solution {
    public int longestMonotonicSubarray(int[] nums) {
        // Variables to track the length of increasing and decreasing subarrays
        int inc = 1, dec = 1, maxLen = 1;
        int n = nums.length;

        // Iterate through the array starting from the second element
        for (int i = 1; i < n; i++) {
            // If current element is greater than the previous one, increase the 'inc' count
            if (nums[i] > nums[i - 1]) {
                inc++;
            } else {
                inc = 1; // Reset 'inc' if sequence is broken
            }

            // If current element is smaller than the previous one, increase the 'dec' count
            if (nums[i] < nums[i - 1]) {
                dec++;
            } else {
                dec = 1; // Reset 'dec' if sequence is broken
            }

            // Update maxLen with the maximum length of either increasing or decreasing sequence
            maxLen = Math.max(maxLen, Math.max(inc, dec));
        }
        return maxLen;
    }
}
