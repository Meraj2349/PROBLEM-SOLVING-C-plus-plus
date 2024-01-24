#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

//const ll n=1e8+5;

bool isPrime(vector<ll> &prime, ll N)
{
    return (prime[N/64] & (1<<((N>>1) & 31)));
}

void isnotPrime(vector<ll> &prime,ll N)
{
   prime[N/64] |= (1<< ((N>>1) & 31));
}
vector<ll>PrimeNumber;

void BitSieve(ll n)
{
   
  ll size=(n+128)/32;

  vector <ll> prime(size,0);

    for (ll  i = 3; i*i <=n; i+=2)
    {
        if (!isPrime(prime,i))
        {
           for (ll j =i*i,k=i<<1; j <= n ; j+=k)
           {
               isnotPrime(prime,j);    
           }
           
        }
        
    }
  PrimeNumber.push_back(2);

  for (ll  i = 3; i <= n; i+=2)
  {
    if (!isPrime(prime,i))
    {
        PrimeNumber.push_back(i);
    }
    
  }

    
}
int32_t main(){

    ll n=1e8;

    BitSieve(n);

   for (ll  i = 0; i < PrimeNumber.size(); i+=100)
   {
      cout<<PrimeNumber[i]<<endl;
   }  
}
