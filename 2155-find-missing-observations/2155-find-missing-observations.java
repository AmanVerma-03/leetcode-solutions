class Solution {
    public int[] missingRolls(int[] rolls, int mean, int n) {
        int [] missingrolls = new int[n]; 

        int totalsum = 0 ;

        int m = rolls.length ;

        for(int i = 0 ; i < m ; i++)
        totalsum+=rolls[i] ;


        // Total sum required for the whole array (existing rolls + missing rolls)

       int sumleft = mean*(m + n) - totalsum ;
         

           // Sum that the missing rolls need to achieve 

         // Check if sumMissing is achievable with n rolls, each between 1 and 6  
       if( sumleft < n || sumleft > 6 * n) 
       return new int[0] ;// Not possible to distribute sumMissing among n rolls

        int basevalue = sumleft / n ;

        int remainder = sumleft % n ;

        for(int i = 0 ; i < n ; i++)
        {
            if (i < remainder)
            {
                missingrolls[i] = basevalue + 1 ; //  fill the resulting array 
            }
            else
            missingrolls[i] = basevalue ;
        }
        return missingrolls ;

    }
}