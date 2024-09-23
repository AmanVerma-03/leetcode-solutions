#include<bits/stdc++.h>
using namespace std;

void printSubsets(int ind, vector<int> &ds, int arr[], int n , int sum) {
    if (ind == n) {
       {
           if (sum == 2)
           {
             for(int i = 0 ; i < ds.size() ; i++)
             cout<<ds[i]<<" ";
            cout<<endl;
           }
            return ;
       }
       
    }

    // Take the current element
    ds.push_back(arr[ind]);
    sum+=arr[ind] ;
    printSubsets(ind + 1, ds, arr, n ,sum);

    // Do not take the current element (backtrack)
    ds.pop_back();
    sum -= arr[ind] ;
    printSubsets(ind + 1, ds, arr, n , sum);
}

int main() {
    int n = 3;
    int arr[] = {1, 2, 1}; // Correct array initialization
    vector<int> ds;
    int sum = 0 ;
    int ind = 0;

    printSubsets(ind, ds, arr, n , sum);
    return 0;
}
