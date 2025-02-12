class Solution {
public:

  int sumOfDigit(int x)
    {
        int s = 0 ;
        while(x!=0)
        {
            s += x%10 ;
            x=x/10 ;
        }
        return s ; 
    }



    int maximumSum(vector<int>& nums) {
        unordered_map<int,int>mpp ;
        int maxSum = -1 ;
        int n = nums.size() ;
        for(int num : nums)
        {
          int digitSum = sumOfDigit(num) ;
          if(mpp.find(digitSum)!=mpp.end())
          {
            maxSum = max(maxSum , mpp[digitSum]+num);
            mpp[digitSum] = max(mpp[digitSum] , num) ;
          }
          else
          mpp[digitSum] = num ; 
        }
        return maxSum ; 
    }
};