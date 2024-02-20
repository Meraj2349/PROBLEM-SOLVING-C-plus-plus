#include<bits/stdc+.h>
#define int long long int
using namespace std;

int kmp(string s)
{
    int n=s.size();
    vector<int>v(n);
    v[0]=1;
    for(int i=1;i<s.size();i++)
    {
        int j=v[i-1];
        
    }
}

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<kmp(s)<<"\n";
    }

    return 0;
}