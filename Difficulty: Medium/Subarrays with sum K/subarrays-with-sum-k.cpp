//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
         unordered_map<int, int> prefixSumMap;
        int count = 0, currentSum = 0;

        for (int num : arr) {
            currentSum += num;

            // If the currentSum is equal to k, increment count
            if (currentSum == k) {
                count++;
            }

            // Check if there is a prefix sum that makes the current sum - k
            if (prefixSumMap.find(currentSum - k) != prefixSumMap.end()) {
                count += prefixSumMap[currentSum - k];
            }

            // Update the prefixSumMap with the currentSum
            prefixSumMap[currentSum]++;
        }

        return count;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.countSubarrays(arr, k);
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends