
class Solution {

    public boolean areAlmostEqual(String s1, String s2) {
        if (s1.equals(s2)) return true;

        List<Integer> diffList = new ArrayList<>();
        for (int i = 0; i < s1.length(); i++) {
            if (s1.charAt(i) != s2.charAt(i)) {
                diffList.add(i);
                if (diffList.size() > 2) return false;
            }
        }

        return diffList.size() == 2 &&
               s1.charAt(diffList.get(0)) == s2.charAt(diffList.get(1)) &&
               s1.charAt(diffList.get(1)) == s2.charAt(diffList.get(0));
    }
}