class Solution {
    // Helper function to compute GCD of two numbers
    private int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }

    public String gcdOfStrings(String str1, String str2) {
        // Check if concatenated strings are equal
        if (!(str1 + str2).equals(str2 + str1)) {
            return "";
        }

        // Find GCD of lengths
        int gcdLength = gcd(str1.length(), str2.length());

        // Return the prefix of str1 with the length of gcdLength
        return str1.substring(0, gcdLength);
    }
}
