class Solution {
public:
    int climbStairs(int n) {
        if (n <=2)
        return  n ;
      int prev = 1 ;
      int prev2 = 2 ;

      int x ;
      for(int i = 3 ; i<= n ; i++)
      {
         x = prev + prev2 ;
        prev = prev2 ;
        prev2 = x ;
      }
      return x ;
    }
};
