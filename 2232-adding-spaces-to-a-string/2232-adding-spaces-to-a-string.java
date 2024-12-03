class Solution {
    public String addSpaces(String s, int[] spaces) {
        StringBuilder ans = new StringBuilder() ;
        int n = s.length() ; 
        int prev = 0 ;  


/* what logic thought behind this question */

                    /* 
           Logic: Divide the string into substrings based on the indices provided in the `spaces` array. 
           - Use `prev` to track the starting point of each substring.
           - `space` will get the next index from the `spaces` array where we need to insert a space.
           - After adding spaces at required positions, don't forget to append the remaining part of the string. 
        */
     for(int space : spaces)
     {
         ans.append(s,prev,space); //append the string s from index prev to index space ;
         ans.append(" "); // append space ;
         prev = space ; // replave prev with space index ; to know the last index ; 
     }
     ans.append(s.substring(prev));// Append the remaining part of the string after the last space
        return ans.toString(); // Convert StringBuilder to String and return
      
    }
}