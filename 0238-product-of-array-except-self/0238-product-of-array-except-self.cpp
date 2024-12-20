class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(); 
        vector<int> result(n); 

        /*
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
            int num = nums[i]; // Get the current element

            if (num != 0) { // Case when the current element is non-zero
                if (count_zero > 0) {
                    // If there's at least one zero in the array, all products will be zero
                    result[i] = 0;
                } else {
                    // Otherwise, compute the product excluding the current element
                    result[i] = product_without_zero / nums[i];
                }
            } else { // Case when the current element is zero
                if (count_zero > 1) {
                    // If there are more than one zeros, all products will be zero
                    result[i] = 0;
                } else {
                    // If there's exactly one zero, the result for this index will be the product of non-zero elements
                    result[i] = product_without_zero;
                }
            }
        }

        return result; // Return the result array

        */
// Compute left products for each element
        result[0] = 1;
        for (int i = 1; i < n; i++) {
            result[i] = result[i - 1] * nums[i - 1];
        }

        // Compute right products and update result in place
        int right_product = 1;
        for (int i = n - 1; i >= 0; i--) {
            result[i] *= right_product;
            right_product *= nums[i];
        }

        return result;  
    }
};

