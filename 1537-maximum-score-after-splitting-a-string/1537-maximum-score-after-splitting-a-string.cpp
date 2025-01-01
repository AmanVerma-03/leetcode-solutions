class Solution {
public:
    int maxScore(string s) {

        /*

        // brute force method ;
       int n = s.size() ;
       int result = INT_MIN ; 
       // iterate through possible split points from 0 to n-2
       for(int i = 0 ; i  <= n-2 ; i++)
       {
         int zero_count = 0 ;
         //count the zeroes in the left substring from s[0] to s[i]
         for(int j = 0 ; j<= i ; j++)
         {
            if(s[j] == '0')
            zero_count++ ;
         }
            
         int one_count = 0 ;
         //count the zeroes in the left substring from s[i+1] to s[n-1]
         for(int k = i+1 ; k<n ; k++)
         {
            if(s[k]== '1')
            one_count++ ;
         }
   
   result = max( result , one_count + zero_count) ;

       }
       return result ; 

       */

       /*

       int n = s.size() ;
       int result = INT_MIN ;    /*
        Optimized solution:
        Instead of calculating zeros and ones repeatedly for every split point,
        we use a single traversal to calculate the total number of ones (`total_one`),
        and then iterate to calculate the score for each split in linear time.
        */
 /*
       int total_one = 0 ;
       int zero = 0 ;
       int left_one = 0 ;
       for(int i = 0 ; i< n  ; i++)
       {
        if(s[i] == '1')
        total_one++ ;
       }
       for(int i = 0 ; i <= n-2 ; i++)
       {
        if(s[i]== '0')
        zero++ ;
        else if(s[i] == '1')
        {
            left_one++ ;

        }
          result = max(result , zero + (total_one-left_one));
       }

  return result ; 
       */ 

       int ones = 0, zeros = 0;
        int ans = INT_MIN;

        // Iterate through the string except the last character
        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] == '1') {
                ones++;
            } else {
                zeros++;
            }
            ans = max(ans, zeros - ones);
        }

        // Check the last character
        if (s[s.length() - 1] == '1') {
            ones++;
        }

        // Add the remaining ones count to the maximum score
        return ans + ones;
    }
};