class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int>mpp ;
        for(int i = 0 ; i < arr.size() ; i++)
        {
           mpp[arr[i]]++;
        }
        for(auto it :target)
        {
            if(mpp.find(it)==mpp.end() || mpp[it]==0)
            return false ;
            mpp[it]--;
        }
        
        return true ;
    }
};