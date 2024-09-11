class Solution {
public:
    int minBitFlips(int start, int goal) {
         int num = start ^ goal ;
         int count = 0 ;
         while(num)
         {
            num &= num-1 ;
            //The num &= num - 1 operation efficiently clears the rightmost 1 bit in each iteration, counting how many 1s are present in the XOR result.
            count++ ;
         }
         return count ;
    }
};