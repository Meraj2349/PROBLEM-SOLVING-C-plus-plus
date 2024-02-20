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
//vector<int>dp (100000,-1);



int factor(int n)
{
     
    if(n==0 || n== 1) {return 1;}

    return  n*factor(n-1);

   
}



int32_t main()
{
    
   int x,y;
   cin>>x>>y;
 
if (x > y)
{
  
   cout<<factor(y);
}
else
cout<<factor(x);
   
   
}