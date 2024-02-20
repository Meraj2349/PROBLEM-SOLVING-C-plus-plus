#include<bits/stdc++.h>
#define int long long int
using namespace std;

int bigmod(int base ,int power,int mod)
{
    if(power==0)return 1;
    else if(power%2)
    {
        int x=base%mod;
        int y=bigmod(base,power-1,mod);
        return (x*y)%mod;
    }
    else 
    {
        int x=bigmod(base,power/2,mod);
        return (x*x)%mod;
    }
}

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        int z=bigmod(x,y,n);
        cout<<z<<"\n";
    }
}