class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int n = str1.length() ;
        int m = str2.length() ;

        int i = 0 , j = 0 ;
        while(i < n && j < m)
        {
            char c1 = str1[i]; // Current character from str1
    char c2 = str2[j]; // Current character from str2
    
    // Check for a match between the current characters of str1 and str2.
    // A match occurs if:
    // 1. The characters are directly equal (c1 == c2).
    // 2. Incrementing c1 cyclically by one results in c2 (c1 + 1 == c2).
    //    Example: 'a' -> 'b', 'z' -> 'a'.
    // 3. Decrementing c1 cyclically by 25 results in c2 (c1 - 25 == c2).
    //    This is equivalent to incrementing c1 cyclically (as 'z' wraps to 'a').

    if (c1 == c2 || c1 + 1 == c2 || c1 - 25 == c2)
    {
        j++; // Move to the next character in str2 as the current one is matched.
    }
           i++ ; // moves ito the next character in ste1 ;

        }
        return j==m ; // if we matched all the characters of str2 then return true ;
    }
};