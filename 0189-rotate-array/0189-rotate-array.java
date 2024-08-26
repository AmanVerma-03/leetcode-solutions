class Solution {
    public void rotate(int[] nums, int k) {
        int n = nums.length;
        k = k % n;  // Handle cases where k > n
        reverse(nums, 0, n - k - 1); // Reverse the first part
        reverse(nums, n - k, n - 1); // Reverse the second part
        reverse(nums, 0, n - 1); // Reverse the whole array
    }

    public static void reverse(int[] nums, int start, int end) {
        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
}
