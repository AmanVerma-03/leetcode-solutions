class Solution {
public:
    int countSeniors(vector<string>& details) {
        int  count1 = 0 ;
        int s = details.size() ;
       for (int i = 0; i < s; i++) {
            // Correctly concatenate the characters and convert to integer
            string age = details[i].substr(11, 2); // Extracts the substring from index 11 of length 2
            int age1 = stoi(age); // Convert the substring to an integer
            if (age1 > 60) {
                count1++;
            }
        }
        return count1;

    }
};