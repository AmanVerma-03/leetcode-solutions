class Solution {

    public int sumOfDigit(int x)
    {
        int s = 0 ;
        while(x!=0)
        {
            s += x%10 ;
            x=x/10 ;
        }
        return s ; 
    }
    public int maximumSum(int[] nums) {
        int maxSum =-1 ; 
      HashMap<Integer,Integer> mpp = new HashMap<>() ;
     for (int num : nums) {
            int digitSum = sumOfDigit(num);
            if(mpp.containsKey(digitSum))
            {
                maxSum = Math.max(maxSum , mpp.get(digitSum)+num);
                mpp.put(digitSum ,  Math.max(mpp.get(digitSum), num)) ;
            }
            else
            mpp.put(digitSum,num);
    
     }
     return maxSum ;
    }


}