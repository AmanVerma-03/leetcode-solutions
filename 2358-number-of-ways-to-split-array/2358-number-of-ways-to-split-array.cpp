class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        /*
        The goal is to determine the number of valid splits in the array such that the sum of the left side
        is greater than or equal to the sum of the right side. To achieve this:
        1. First, calculate the total sum of the array.
        2. Iterate through the array, maintaining the cumulative sum for the left side (`leftsum`).
        3. Subtract the `leftsum` from the total sum to get the right side sum (`rightsum`).
        4. Check if the `leftsum` is greater than or equal to the `rightsum`. If true, count this as a valid split.
        5. Return the total count of valid splits.
        */
        long long n = nums.size();
        long long totalsum = 0;
        for (int i : nums) {
            totalsum += i;
        }
        long long split = 0;
        long long leftsum = 0;
        for (int i = 0; i < n - 1; i++) {
            leftsum += nums[i];
            long long rightsum = totalsum - leftsum;
            if (leftsum >= rightsum) {
                split++;
            }
        }
        return split;
    }
};
