class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mpp;
        for(int i = 0 ; i < arr.size() ; i++)
        {
            mpp[arr[i]]++ ;
        }
        int distinctcount = 0 ;
        for(auto s :arr)
        {
            if(mpp[s] == 1)
            distinctcount++ ;
            if(distinctcount == k)
            return s;
        }
        return "";
    }
};