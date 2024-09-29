class Solution {
public:
    int calculate(string s) {
        int n = s.length();
        int ans = 0;      // Final result
        int num = 0;      // Current number being processed
        int interim = 0;  // Temporary result for multiplication/division
        char op = '+';    // Store the last operator (initialize to '+')

        for (int i = 0; i < n; i++) {
            // Build the number
            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }

            // Process the operator or the end of the string
            if (!isdigit(s[i]) && s[i] != ' ' || i == n - 1) {
                if (op == '+') {
                    ans += interim;  // Add the previous interim value to the result
                    interim = num;   // Reset interim to current number
                }
                else if (op == '-') {
                    ans += interim;  // Add the previous interim value to the result
                    interim = -num;  // Set interim to negative current number
                }
                else if (op == '*') {
                    interim *= num;  // Multiply current interim
                }
                else if (op == '/') {
                    interim /= num;  // Divide current interim
                }

                // Reset num and update op to the current operator
                num = 0;
                op = s[i];
            }
        }

        // Add the last processed number to the result
        ans += interim;
        return ans;
    }
};
