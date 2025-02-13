class Solution {
    public int minOperations(int[] nums, int k) {
        PriorityQueue<Integer>pq = new PriorityQueue<>();
        int count = 0 ; 
        // Step 1: Add elements < k to the priority queue
        for (int num : nums) {
            if (num < k) {
                pq.add(num);
            }
        }

        // If all numbers are already >= k, return 0 (no operations needed)
        while (!pq.isEmpty()) {
            int x = pq.poll();
            count++;

            if (pq.isEmpty()) break;

            int y = pq.poll();
            long newValue = 2L * x + y;

            if (newValue < k) pq.add((int) newValue);
        }

        return count;
    }
}
