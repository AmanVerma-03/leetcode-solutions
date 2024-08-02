class Solution {
    public int minSwaps(int[] nums) {
            int n = nums.length;
        int totalOnes = 0;
        
        // Count total number of 1s in the array
        for (int num : nums) {
            if (num == 1) {
                totalOnes++;
            }
        }
        
        // If there are no 1s or only one 1, no swaps needed
        if (totalOnes == 0 || totalOnes == 1) {
            return 0;
        }
        
        // To handle the circular nature, extend the array
        int[] extendedNums = new int[2 * n];
        for (int i = 0; i < n; i++) {
            extendedNums[i] = nums[i];
            extendedNums[i + n] = nums[i];
        }
        
        // Find the maximum number of 1s in any window of size totalOnes
        int maxOnesInWindow = 0;
        int currentOnes = 0;
        
        for (int i = 0; i < 2 * n; i++) {
            if (i >= totalOnes) {
                if (extendedNums[i - totalOnes] == 1) {
                    currentOnes--;
                }
            }
            
            if (extendedNums[i] == 1) {
                currentOnes++;
            }
            
            if (i >= totalOnes - 1) {
                maxOnesInWindow = Math.max(maxOnesInWindow, currentOnes);
            }
        }
        
        // Minimum swaps is the difference between total 1s and the maximum number of 1s in any window of size totalOnes
        return totalOnes - maxOnesInWindow;
    
    }
}