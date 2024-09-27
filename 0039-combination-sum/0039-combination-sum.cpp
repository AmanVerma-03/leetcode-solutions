class Solution {


public: 

void solve(int ind , int target , vector<int>&arr , vector<vector<int>>&ans , vector<int>&ds)
{
    if(ind == arr.size())
    {
        if(target == 0)
        {
            ans.push_back(ds);
        }
        return ;
    }
    if(arr[ind]<=target)
    {
      ds.push_back(arr[ind]);
      solve(ind,target-arr[ind] , arr , ans ,ds);
      ds.pop_back() ;
    }
    
      solve(ind+1,target , arr , ans ,ds);
}

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size() ;
        vector<int>ds ;
        vector<vector<int>>ans;
        solve(0,target,candidates,ans,ds);
        return ans ;
    }
};