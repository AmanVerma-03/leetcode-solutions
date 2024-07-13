class Solution {
    public int findNumbers(int[] nums) {
        
        int counteven = 0 ;
        for(int i = 0 ; i < nums.length ; i++)
        {
            
            int len = (int) (Math.log10(nums[i]) + 1);

            if(len % 2 == 0)
            counteven++ ;
        
        }
        return counteven ;
    }
    //  int checkdigit(int []nums , int target )
    // {
    //     int len = 0 ;
    //    int x = nums[target];
    //    while(x>0)
    //   {
    //     x=x/10;
    //     len++ ;
    //   }
    //   return len ;
    // }
    
}