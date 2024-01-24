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
int32_t main()
{
   int  n;
   cin>> n;
   
   if(n==0)
   {
      cout<<1;
   }

   if (n%4==0)
   {
    cout<<6;
   }
   if (n%4==1)
   {
    cout<<8;
   }
   if (n%4==2)
   {
    cout<<4;
   }
   if (n%4==3)
   {
    cout<<2;
   }
   
}