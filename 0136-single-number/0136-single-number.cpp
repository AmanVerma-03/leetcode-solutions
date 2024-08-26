class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mpp ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            mpp[nums[i]]++ ;
        }
        int x = 0 ;
        for(auto it : mpp)
        {
            if(it.second == 1)
            x = it.first ;
        }
        return x ;
    }
};