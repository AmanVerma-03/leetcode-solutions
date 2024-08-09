class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        int n = nums.length;
        Set<List<Integer>> st = new HashSet<>();
        
        for (int i = 0; i < n; i++) {  // Need at least 3 elements to form a triplet
            Set<Integer> hashSet = new HashSet<>();
            for (int j = i + 1; j < n; j++) {
                int k = - (nums[i] + nums[j]);
                if (hashSet.contains(k)) {
                    List<Integer> temp = Arrays.asList(nums[i], nums[j], k);
                    temp.sort(null);  // Sort to avoid duplicates
                    st.add(temp);
                }
                hashSet.add(nums[j]);
            }
        }
        
        return new ArrayList<>(st);
    }
}