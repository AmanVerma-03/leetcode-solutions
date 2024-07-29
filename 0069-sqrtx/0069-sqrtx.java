class Solution {
    public int mySqrt(int x) {
       if (x < 2) {
            return x;
        }
        
        // Initial guess can start from the number itself
        long y = x;
        
        // Apply Newton's method
        while (y * y > x) {
            y = (y + x / y) / 2;
        }
        
        return (int) y;
    }
}