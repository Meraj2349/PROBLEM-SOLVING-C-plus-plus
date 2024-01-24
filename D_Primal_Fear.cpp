#include<bits/stdc++.h>
using namespace std;
#define mii map<int, int> 
#define vi vector<int> 
#define int long long int 
#define f first
#define s second 
#define pb push_back 
#define mp make_pair 
#define mod 100000007

int N=10000000;
vector<bool> prime_bool(N+1,true);
vi prime;

vector<string>strvec;

void sieve(int n)
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
    sieve(N);
   int t;
   cin>>t;
   while(t--)
   {
     int n;
     cin>>n;

     
     for (int  i = 0; i <prime.size(); i++)
     {
        string s=to_string(prime[i]);
        for (int  J = 0; J < 8; J++)
        {
            if(s[J]!='0' && prime_bool[ ])
            {
              
            }
        }
        

        
        /* code */
     }
     

   }
}