class Solution {
    public int tupleSameProduct(int[] nums) {
        Map<Integer,Integer>mpp = new HashMap<>();
        int count = 0 ;
        for(int i = 0 ; i < nums.length ; i++)
        {
            for(int j = i+1 ; j < nums.length ; j++)
            {
               int product = nums[i] * nums[j] ;
               count += mpp.getOrDefault(product,0);
               mpp.put(product,mpp.getOrDefault(product,0)+1);
            }
        }
        return count* 8 ; 
    }
}