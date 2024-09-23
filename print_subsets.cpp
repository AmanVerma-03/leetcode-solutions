#include<bits/stdc++.h>
using namespace std;

void printSubsets(int ind, vector<int> &ds, int arr[], int n) {
    if (ind == n) {
        for (int i = 0; i < ds.size(); i++) {
            cout << ds[i] << " ";
        }
        cout << endl;
        return;
    }

    // Take the current element
    ds.push_back(arr[ind]);
    printSubsets(ind + 1, ds, arr, n);

    // Do not take the current element (backtrack)
    ds.pop_back();
    printSubsets(ind + 1, ds, arr, n);
}

int main() {
    int n = 3;
    int arr[] = {3, 1, 2}; // Correct array initialization
    vector<int> ds;
    int ind = 0;

    printSubsets(ind, ds, arr, n);
    return 0;
}
