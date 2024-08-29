class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1;
        int n = nums.size();

        // Step 1: Find the first index from the end where the array is not in descending order.
        for(int i = n - 2; i >= 0; i--) {
            if(nums[i] < nums[i + 1]) {
                ind = i;
                break;
            }
        }

        // Step 2: If no such index is found, the array is in descending order,
        // which means this is the last permutation. So reverse it to get the first permutation.
        if (ind == -1) {
            reverse(nums.begin(), nums.end());
            return; // Add this return statement
        }

        // Step 3: Find the smallest number greater than nums[ind] to swap with it.
        for(int i = n - 1; i > ind; i--) {
            if(nums[i] > nums[ind]) {
                swap(nums[i], nums[ind]);
                break;
            }
        }

        // Step 4: Reverse the part of the array after the index 'ind' to get the next permutation.
        reverse(nums.begin() + ind + 1, nums.end());

    }
};