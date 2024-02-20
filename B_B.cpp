#include<bits/stdc++.h>
#define int long long int
using namespace std;

void solve(string s)
{
    vector<int>v;
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            v.push_back(1);
        }
        else
        {
            if(v.size()==0);
            else if(v[v.size()-1]==1)
            {
                cnt++;
                v.pop_back();
            }
        }
    }
    cout<<2*cnt<<"\n";
}

int32_t main()
{
    string s;
    cin>>s;
    solve(s);

    return 0;
}