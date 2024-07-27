class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
               vector<double> nums(0);
        int k1=0, k2=0;
        double ans;
        while(k1<nums1.size() && k2<nums2.size())
        {
            if(nums1[k1] <= nums2[k2])
            {
                nums.push_back(nums1[k1]);
                k1++;
            }
            else
            {
                nums.push_back(nums2[k2]);
                k2++;
            }
        }
        while(k1<nums1.size())
        {
            nums.push_back(nums1[k1]);
            k1++;
        }    
        while(k2<nums2.size())
        {
            nums.push_back(nums2[k2]);
            k2++;
        }
        int mid = nums.size()/2;
        if(nums.size()%2==0)
            ans = (nums[mid-1] + nums[mid]) / 2;
        else
            ans = nums[mid];
        return ans;
 
    }
};