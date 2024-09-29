class Solution {
public:
    int calculate(string s) {
        int n = s.length();
        stack<int> st;
        int result = 0;
        int number = 0;
        int sign = 1;

        for (int i = 0; i < n; i++) {
            if (isdigit(s[i])) {
                number = number * 10 + (s[i] - '0');  // build the number
            }
            else if (s[i] == '+') {
                result = result + (number * sign);
                number = 0;
                sign = 1;
            }
            else if (s[i] == '-') {
                result = result + (number * sign);
                number = 0;
                sign = -1;
            }
            else if (s[i] == '(') {
                // Push the result and the sign to the stack
                st.push(result);
                st.push(sign);
                result = 0;
                sign = 1;
                number = 0;
            }
            else if (s[i] == ')') {
                result = result + (number * sign);  // Add current number inside parentheses
                number = 0;

                result *= st.top();  // Multiply the result with the sign before '('
                st.pop();

                result += st.top();  // Add the result before '('
                st.pop();
            }
            else {
                continue;
            }
        }

        // Add the last processed number, if any
        result = result + (number * sign);

        return result;
    }
};
