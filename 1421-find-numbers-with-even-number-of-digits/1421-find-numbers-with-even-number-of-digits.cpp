class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int counteven = 0 ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int target = i ;
            int num = checkdigit(nums,target);
            if(num%2==0)
            counteven++ ;
        
        }
        return counteven ;
    }
     int checkdigit(vector<int>&nums , int target )
    {
        int len = 0 ;
       int x = nums[target];
       while(x>0)
      {
        x=x/10;
        len++ ;
      }
      return len ;
    }
};