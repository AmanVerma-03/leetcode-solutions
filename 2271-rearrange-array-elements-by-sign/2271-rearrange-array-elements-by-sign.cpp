class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
     vector<int> pos;
        vector<int> neg;
        vector<int> ans(nums.size());  // Initialize `ans` with the size of `nums`.

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] >= 0)
                pos.push_back(nums[i]);
            else
                neg.push_back(nums[i]);
        }

        int posIndex = 0, negIndex = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(i % 2 == 0)
                ans[i] = pos[posIndex++];
            else
                ans[i] = neg[negIndex++];
        }

        return ans;
    }
};