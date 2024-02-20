#include<bits/stdc++.h>
#define mii map<int, int> 
#define vi vector<int> 
#define int long long int 
#define f first
#define s second 
#define pb push_back 
#define mp make_pair 
#define mod 100000007
using namespace std;
int32_t main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x,y,n,count=0;
        cin>>x>>y>>n;
        int remainder= n%x;
        int y1=remainder-y;
        int ans=n-y1;
        if(ans>n)
        {
            cout<<ans-x<<endl;
        }
        else
        cout<<ans<<endl;
    
       
        
    }
}