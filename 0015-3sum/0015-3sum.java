class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
  List<List<Integer>> ans = new ArrayList<>();
        int n = nums.length;
        Arrays.sort(nums);

        for (int i = 0; i < n - 2; i++) {
            // Skip duplicate elements for the 'i' index
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum < 0) {
                    j++;
                } else if (sum > 0) {
                    k--;
                } else {
                    ans.add(Arrays.asList(nums[i], nums[j], nums[k]));

                    // Skip duplicate elements for the 'j' index
                    while (j < k && nums[j] == nums[j + 1]) {
                        j++;
                    }

                    // Skip duplicate elements for the 'k' index
                    while (j < k && nums[k] == nums[k - 1]) {
                        k--;
                    }

                    j++;
                    k--;
                }
            }
        }

        return ans;
    }
}