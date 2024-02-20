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
    int t,c=1;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int b,i=0,x=0;
        cin>>b;
        if(a[0]=='-') i=1;
        for(;i<a.size();i++)
        {
            x=x*10+(a[i]-'0');
            x=x%b;
        }
        if(x==0)
        {
            cout<<"Case "<<c<<": "<<"divisible"<<endl;
        }
        else 
        cout<<"Case "<<c<<": "<<"not divisible"<<endl;

        c++;
    }
}