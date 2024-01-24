#include <bits/stdc++.h>
using namespace std;
#define int long long int

void sieve(int n,vector<int> &prime)
{

    vector<bool>isPrime(n+1,true);

    for (int i = 2; i*i<= n; i++)
    {
        if (isPrime[i])
        {
            for (int j=i*i; j <= n; j+=i)
            {
                isPrime[j]=false;
            }
            
        }
        
    }
    for (int i = 2; i <= n; i++)
    {
       if(isPrime[i])
       {
         prime.push_back(i);
       }
    }
    
}


int32_t main(){
    
 int n,k;
 cin>>n>>k;

 vector<int>prime;

 sieve(n,prime);
 int ans=0;

 for (int i = 0; i < prime.size(); i++)
 {
   int x=prime[i]-1;
   for(int j=1;j<prime.size();j++)
   {
        if(prime[j]+prime[j-1]==x)
        {
            ans++;
            break;
        }
   }
 }
 (ans>=k)?cout<<"YES\n":cout<<"NO\n";
    return 0;
}