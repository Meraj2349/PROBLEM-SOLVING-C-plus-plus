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
   int t;
   cin>>t;
   while (t--)
   {
    int n;

    cin>>n;

    vi v;

    for (int  i = 2; i < n; i++)
    {
        if(n%i==0)
        {
            v.pb(i);
        }
    }
    
    if(v.size()>=3)
    {
        cout<<"YES"<<endl;
        for (int i = 0; i < 3; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
    }
    else{
        cout<<"NO"<<endl;

    }
   }
   
}