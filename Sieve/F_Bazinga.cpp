#include <bits/stdc++.h>
using namespace std;
#define int long long int 


void sieve(vector<int> &prime,int n)

{

    vector<bool> prime_bool(n+1,true);
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


int32_t main(){

int n=2e7;
vector<int>prime;
sieve(prime,n);
vector<int> almostprime;

   for (int i = 0; i < prime.size(); i++)
   {
       for (int j = i+1; j < prime.size(); j++)
      {
         int multi= prime[i]*prime[j];

         if (multi > n)break;
         almostprime.push_back(multi);
         
         
       } 
    }
    sort(almostprime.begin(),almostprime.end());


int t;
cin>>t;
while (t--)
{
   int q;
   cin>>q;

    cout<<almostprime[q-1]<<endl;



   }
}

