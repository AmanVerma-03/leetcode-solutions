class Solution {
    public int maxScore(String s) {
        int one = 0 ;
        int zero = 0 ;
        int result = Integer.MIN_VALUE ;
        int n = s.length() ;
        for(int i = 0 ; i <= n-2 ; i++)
        {
            if(s.charAt(i) == '1')
            one++ ;
            else
            zero++ ;
         result = Math.max(result , zero-one);

        }
        if(s.charAt(n-1) == '1')
        one++ ;

        return result + one ; 

    }
}