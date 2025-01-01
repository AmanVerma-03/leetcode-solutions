//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
 string generate(string &s) {
        vector<int> count(26, 0); // Frequency array for 26 lowercase letters
        
        // Count the frequency of each character in the string
        for (char &ch : s) {
            count[ch - 'a']++;
        }
        
        // Generate the sorted representation of the string
        string new_s;
        for (int i = 0; i < 26; i++) {
            new_s += string(count[i], 'a' + i); // Append each character based on its frequency
        }
        
        return new_s;
    }
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        int n = arr.size();
        unordered_map<string,vector<string>>mpp;
        vector<vector<string>>result ;
        for(int  i = 0 ; i < n ; i++)
        {
            string word = arr[i] ;
            string new_word = generate(word) ;
            mpp[new_word].push_back(word);
        }
        for(auto it : mpp)
        {
            result.push_back(it.second);
        }
        return result ;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<string> arr;
        string input_line;
        getline(cin, input_line);
        stringstream ss(input_line);
        string word;
        while (ss >> word) {
            arr.push_back(word);
        }

        Solution ob;
        vector<vector<string> > result = ob.anagrams(arr);
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++) {
            for (int j = 0; j < result[i].size(); j++) {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends