// 0 1 1 2 3 5 ...

#include <bits/stdc++.h>
using namespace std;
int dp[105];
int fibo(int n)
{
    if(n==0) return 0;
    if (n==1) return 1;
    if (dp[n]!= -1) return dp[n];


    return dp[n]=fibo(n-2)+fibo(n-1);

    // number of weay;

    if (n<=1)
    {
        dp[n]=n;
        return n;
    }

    else
    {
        if(dp[n-2]==-1)
        {
            dp[n-1]==fibo(n-2);
        }
        if(dp[n-1]==-1)
        {
            dp[n-1]=fibo(n-1);
        }

        return dp[n-1]+dp[n-2];
        
    }

}
int main(){
    memset(dp,-1,sizeof(dp));

    cout<<fibo(10);
}