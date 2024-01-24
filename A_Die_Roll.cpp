#include<bits/stdc++.h>

using namespace std;
int32_t main()
{
    int x,y;
    cin>>x>>y;

    
    if(x==y)
    {
        cout<<"1/1";

    }

    else if(x%2==0 && y%2==0)
    {
        cout<<(y/2)<<"/"<<(x/2);
    }

    else
    {
    cout<<y<<"/"<<x;
    }
    
}