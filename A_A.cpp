#include<bits/stdc++.h>
#define int long long int
using namespace std;

void solve(int n)
{
    int ans=0;
    for(int i=6;i<=n;i++)
    {
        int x=0,p=i;
        for(int j=2;j*j<=i;j++)
        {
            if(p%j==0)
            {
                x++;
                while(p%j==0)
                {
                    p/=j;
                }
            }
        }
        x+=(p>1);
        ans+=(x==2);
    }

    cout<<ans<<"\n";
}

int32_t main()
{
    int n;
    cin>>n;
    solve(n);

    return 0;
}