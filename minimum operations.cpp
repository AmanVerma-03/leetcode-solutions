#include<bits/stdc++.h>
using namespace std ;
int solve(int x)
{
    int dp[x+1]={0};
    dp[1]=0;
    dp[2]=1;
    int i = 3 ; 
    while(i<=x)
    {
        if(i%7==0)
        {
            dp[i]=(dp[i-1]+1,min(dp[i-2]+1,dp[i/7]+ 1)) ; 
        }
        else
        {
            dp[i]=min(dp[i-1]+1,dp[i-2]+1) ; 
        }
        i++;
    }
    return dp[x] ; 
}
int main()
{
    
    int x = 93 ; 
    cout<<"Minimum number of steps required to make the given number to 1"<<solve(x);
    
    return 0 ;
}