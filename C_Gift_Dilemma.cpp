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
   int t,sum=0;

   cin>>t;
   
   while (t--)
   {
    sum++;

    vi v;

    v.clear();

    int x,y,z,p, count=0;

    cin>>x>>y>>z>>p;

     if(x*3==p) count++;
      if(y*3==p) count++;
     if(z*3==p) count++;
     if(x+y+z==p) count++;

     
      if(2*y+x==p) count++;
     if(2*z+x==p) count++;
     if(2*x+y==p) count++;
     if(2*x+z==p) count++;
   if(2*y+z==p) count++;
     if(2*z+y==p) count++;

    cout<<"Case "<<sum<<": "<<count<<endl;
      
   }
   
}