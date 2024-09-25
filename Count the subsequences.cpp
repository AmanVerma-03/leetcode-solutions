#include<bits/stdc++.h>
using namespace std;

int counts(int ind, int s, int sum, int arr[], int n) {
    if (ind == n) {
        // Base case: if we reach the end and the sum matches, return 1
        if (s == sum) {
            return 1;
        }
        return 0;
    }

    // Include the current element in the subsequence
    int l = counts(ind + 1, s + arr[ind], sum, arr, n);

    // Exclude the current element from the subsequence
    int r = counts(ind + 1, s, sum, arr, n);

    // Return the sum of both recursive cases
    return l + r;
}

int main() {
    // Count the subsequences whose sum == k
    int n = 3;
    int arr[] = {1, 2, 1};
    int sum = 2;

    // Start counting from index 0 with initial sum of 0
    cout << counts(0, 0, sum, arr, n) << endl;

    return 0;
}
