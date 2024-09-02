class Solution {
    public int chalkReplacer(int[] chalk, int k) {
        int ans = 0 ;
        long totalchalk = 0 ;
        int n = chalk.length ;
        for(int i = 0 ; i < n ; i++)
        {
            totalchalk+=chalk[i] ;
             // Calculate the total sum of chalk required for one full round
        }
     
         long rem = (int) (k%totalchalk) ; // since the sequence is cyclic , return k modulo totalchalk
    
    for(int i = 0 ; i < n ; i++)
    {
        if ( rem < chalk[i]) // find the student where we can replace the chalk ;
        {
            return i ;
        }
        rem-=chalk[i] ;
    }
    return -1 ; 
    }
}