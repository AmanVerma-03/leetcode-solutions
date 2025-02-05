import java.util.*;

class Solution {

    public boolean check(String s1, String s2) {
        Set<Character> st = new HashSet<>();
        for (char i : s1.toCharArray()) {
            st.add(i);
        }
        return s2.chars().anyMatch(ch -> st.contains((char) ch));
    }

    public boolean areAlmostEqual(String s1, String s2) {
        if (s1.equals(s2)) {
            return true;
        }

        int diffCount = 0;
        List<Integer> diffList = new ArrayList<>();

        for (int i = 0; i < s1.length(); i++) {
            if (s1.charAt(i) != s2.charAt(i)) {  
                diffCount++;
                diffList.add(i);
            }
        }

        if (diffCount != 2) {
            return false;
        }

        int i1 = diffList.get(0);
        int i2 = diffList.get(1);

        return s1.charAt(i1) == s2.charAt(i2) && s1.charAt(i2) == s2.charAt(i1); 
    }
}
