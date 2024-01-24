#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=2e6;
    int x=sqrt(n);
    bool isprime[n+1];
    for(int i=0;i<=n;i++)
    {
        isprime[i] = true;
    }
    isprime[0] = false;
    isprime[1] = false;
    for(int i=4;i<=x;i+=2)
    {
        isprime[i==false];
    }
    for(int i=3;i<=x;i+=2)
    {
        for(int j=i;i*j<=n;j+=2)
        {
            isprime[i*j]=false;
        }
    }
    vector<int>primes;
    for(int i=0;i<=n;i++)
    {
        if(isprime[i]==true)
        {
            primes.push_back(i);
        }
    }
    vector<int>alp;
    for(int i=0;i<primes.size()-1;i++)
    {
        for(int j=i+1;j<primes.size();j++)
        {
            alp.push_back(i*j);
        }
    }
    sort(alp.begin(),alp.end());

    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        cout<<alp[k-1]<<endl;
    }

    return 0;
}