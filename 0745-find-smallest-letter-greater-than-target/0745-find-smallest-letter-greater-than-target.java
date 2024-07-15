class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        int start = 0;
        int end = letters.length - 1;
        int mid ;
        while (start <= end) {
            // int mid = (start + end)/2;
            // integer have a fix size , there might be possible that (start + end) thing we are doing exceeds the range of integers in java
             mid = start + (end - start) / 2;
            if ( letters[mid] <= target)
                start = mid + 1;
            else  
                end = mid - 1;
            
        }
       return start == letters.length ? letters[0] : letters[start];
    }
}