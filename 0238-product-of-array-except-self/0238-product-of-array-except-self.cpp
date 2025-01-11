class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(); 
        vector<int> result(n); 

        /*
        // Approach 1: Brute Force
        // Time Complexity: O(n^2)
        // Space Complexity: O(1)
        // For each element, calculate the product of all other elements by iterating the array.
        for (int i = 0; i < n; i++) {
            int product = 1;
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    product *= nums[j];
                }
            }
            result[i] = product;
        }
        */

        /*
        // Approach 2: Using total product with zero count
        // Time Complexity: O(n)
        // Space Complexity: O(1) (excluding result array)
        int count_zero = 0; // Count the number of zeros in the array
        int product_without_zero = 1; // Product of all non-zero elements in the array

        // Step 1: Calculate the product of all non-zero elements and count the number of zeros
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) 
                count_zero++; // Increment zero count if the current element is zero
            else 
                product_without_zero *= nums[i]; // Multiply non-zero elements
        }

        // Step 2: Compute the result array
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                // If exactly one zero, assign product of non-zero elements; if more than one zero, assign 0
                result[i] = (count_zero == 1) ? product_without_zero : 0;
            } else {
                // If no zeros, assign product excluding the current element
                result[i] = (count_zero > 0) ? 0 : product_without_zero / nums[i];
            }
        }
        */

        // Approach 3: Optimized approach using left and right products
        // Time Complexity: O(n)
        // Space Complexity: O(1) (excluding result array)

        // Compute left products for each element
        result[0] = 1;
        for (int i = 1; i < n; i++) {
            result[i] = result[i - 1] * nums[i - 1];
        }

        // Compute right products and update result in place
        int right_product = 1;
        for (int i = n - 1; i >= 0; i--) {
            result[i] *= right_product; // Combine left and right products
            right_product *= nums[i];  // Update right product
        }

        return result;  
    }
};
