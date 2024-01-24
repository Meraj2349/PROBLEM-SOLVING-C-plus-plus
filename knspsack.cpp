#include <bits/stdc++.h>
using namespace std;
int wt[105],val[105];
int dp[105][100005];
int fun(int index,int wt_left)
{
   if(wt_left==0) return 0;
   if (index<0) return 0;

if(dp[index][wt_left+1] != -1) return dp[index][wt_left+1];
   //dont chooss item at ind
   int ans=fun(index-1,wt_left);

if (wt_left-wt[index]>=0)
   ans = max (ans,fun(index-1,wt_left-wt[index])+val[index]);
 return dp[index][wt_left+1]= ans;

 
}

int main(){

    memset(dp,-1,sizeof(dp));
    int n,m;
    cin>>n>>m;
    for (int  i = 0; i <  n; i++)
    {
        cin>>wt[i]>>val[i];
    }

   cout << fun(n-1,m);
    
    
}