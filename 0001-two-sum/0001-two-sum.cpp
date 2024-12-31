class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int,int>mpp ;
     for(int i = 0 ;  i < nums.size() ; i++)
     {
        int num = nums[i] ;
        int remaining = target - num ;
        if(mpp.find(remaining)!=mpp.end())
        {
            return {mpp[remaining] , i };
        }
        mpp[num] = i ;
     }

     return {-1,-1} ; 
    }
};