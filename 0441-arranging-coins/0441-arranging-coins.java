class Solution {
    public int arrangeCoins(int n) {
        int count1 = 0 ;
        int temp = n ;
        int i = 1 ;
        while(temp >= i)
        {
            temp-=i ;
            count1++ ;
            i++ ;
        }
        return count1++ ;
    }
}