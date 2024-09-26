#include <iostream>
#include <vector>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

class Solution {
public:
    // Function to merge two halves of the array
    void merge(int arr[], int l, int m, int r) {
        vector<int> temp;
        int left = l;
        int right = m + 1;

        // Merge the two halves
        while (left <= m && right <= r) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            } else {
                temp.push_back(arr[right]);
                right++;
            }
        }

        // Copy remaining elements from the left half, if any
        while (left <= m) {
            temp.push_back(arr[left]);
            left++;
        }

        // Copy remaining elements from the right half, if any
        while (right <= r) {
            temp.push_back(arr[right]);
            right++;
        }

        // Copy the merged elements back into the original array
        for (int i = l; i <= r; i++) {
            arr[i] = temp[i - l];
        }
    }

    // Recursive function to divide and sort the array
    void mergeSort(int arr[], int l, int r) {
        if (l >= r) return;

        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
};

int main() {
    int T, n;
    cin >> T;  // Number of test cases

    while (T--) {
        cin >> n;  // Size of the array
        int arr[n];

        // Input array elements
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Create an object of the Solution class
        Solution ob;
        ob.mergeSort(arr, 0, n - 1);  // Perform merge sort

        // Print the sorted array
        printArray(arr, n);
    }

    return 0;
}
