class Solution {
    public String reverseVowels(String s) {
      HashSet<Character> vowels = new HashSet<>(Arrays.asList('a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'));
        char[] arr = s.toCharArray();
        int i = 0, j = arr.length - 1;
        while(i<j)
        {
            if(!vowels.contains(arr[i]))
            {
                i++ ;
            }
            else if(!vowels.contains(arr[j]))
            {
                j-- ;
            }
            else
            {
                char temp =  arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = temp ;
                i++ ;
                j-- ;
            }
        }
        return new String(arr) ;
    }
}