class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       set<int> st1(nums1.begin(), nums1.end());
        set<int> st2;

        for (int i : nums2) {
            if (st1.count(i)) {
                st2.insert(i);
            }
        }

        vector<int> result(st2.begin(), st2.end());
        return result;


    }
};