class Solution {
    public int longestConsecutive(int[] nums) {
        
        // Edge case: If the array is empty, return 0 since there can't be any consecutive sequence
        if (nums.length == 0) {
            return 0;
        }
        
        int longest = 1; // Initialize the variable to store the length of the longest consecutive sequence
        Set<Integer> set = new HashSet<>(); // Use a HashSet to store the unique elements of the array
        
        // Add all elements of the array to the HashSet
        // The HashSet helps in O(1) time complexity for lookups
        for (int i = 0; i < nums.length; i++) {
            set.add(nums[i]);
        }
        
        // Iterate over each element in the HashSet
        for (int it : set) {
            // Check if 'it' is the start of a sequence
            // 'it' is the start if 'it - 1' is not in the set
            if (!set.contains(it - 1)) {
                int cnt = 1; // Initialize the count of the current consecutive sequence
                int x = it;  // Start the sequence from 'it'
                
                // Continue checking the next consecutive numbers
                // If 'x + 1' is in the set, it's part of the sequence
                while (set.contains(x + 1)) {
                    x = x + 1;  // Move to the next number in the sequence
                    cnt = cnt + 1;  // Increment the count of the sequence length
                }
                
                // Update the longest consecutive sequence found so far
                longest = Math.max(longest, cnt);
            }
        }
        
        // Return the length of the longest consecutive sequence
        return longest;
    }
}
