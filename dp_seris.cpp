#include<bits/stdc++.h>
#define mii map<int, int> 
#define vi vector<int> 
#define int long long int 
#define f first
#define s second 
#define pb push_back 
#define mp make_pair 
#define mod 100000007
#define fast ios:: sync_with_stdio(0); cin. tie(0):
#define rep(i,a,b) for (int i=a; i<b; i++)
#define all(c) c.begin(). c.end ()
using namespace std;

int dp[100];




int  fivo(int n)
{
   if(n<=1)
   {
      dp[n]=n;

    return n;
   }
  else
  {

   if (dp[n-2]== -1)
   {
      dp[n-2]=fivo(n-2);
      /* code */
   }
   if (dp[n-1]== -1)
   {
      dp[n-1]=fivo(n-1);
      /* code */
   }

      return dp[n-2]+dp[n-1];
  }
   

}
int32_t main()
{
   for (int  i = 0; i <10; i++)
   {
       dp[i]=-1;
   }
   
   
   cout<<fivo(8)<<endl;

}