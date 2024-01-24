#include<bits/stdc++.h>
#define mii map<int, int> 
#define vi vector<long long int> 
#define int long long int 
#define f first
#define s second 
#define pb push_back 
#define mp make_pair 
#define mod 100000007
using namespace std;
int n=10000000;
vector<bool> prime_bool(n+1,true);
vector<int>prime;

void primeNumber(int n)
{ 
    prime_bool[0]=prime_bool[1]=false;
    for (int  i = 2; i*i<=n ; i++)
    {
        if (prime_bool[i]==true)
        {
            for (int  j = i*i; j <=n; j+=i)
            {
                prime_bool[j]=false;
            }
            
        }
    }

    for (int  i = 2; i <= n; i++)
    {
        if (prime_bool[i]==true)
        {
              prime.push_back(i);
        }
    } 
}

int32_t main()
{
    int t;
    cin>>t;
    primeNumber(n);
    int k=1;
    while (t--)
    { 
        int N,count=0,a=0,b=0;
        cin>>N;
        for (int i = 0; i < prime.size() && prime[i]<=N; i++)
        {
            a= prime[i];
            b=N-a;
            if(a>b)break;
            if(prime_bool[b])count++;
        }
        cout<<"Case "<<k<<": "<<count<<endl;
        k++;
    }
    return 0; 
}