#include <iostream>
using namespace std;
int main() {
   int n ;
    cin>>n ; 
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    cin>>arr[i];
    int maxi  = 0 ;
    for(int i = 1 ; i < n ; i++)
    {
        maxi = max(maxi , arr[i]+arr[i-1]);
    }
    cout<<maxi<<endl;
}
