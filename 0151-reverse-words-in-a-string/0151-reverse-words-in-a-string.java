class Solution {
    public String reverseWords(String s) {
        String [] sArray = s.trim().split("\\s+") ;
        String ans = "" ;
        for(int i = sArray.length-1 ; i >= 0  ; i--)
        {
            ans += sArray[i];
            if(i != 0)
            {
                ans += " ";
            }
        }
     
        return ans ;
    }
}