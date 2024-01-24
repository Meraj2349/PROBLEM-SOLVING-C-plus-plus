#include <bits/stdc++.h>
using namespace std;
//#define int long long int 
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
    int n;
    cin>>n;

    vector<int>prime;

    sieve(prime,n);

    //  for (int pp : prime)
    //  {
    //     cout<<pp<<endl;
    //  }
     
    int ans=0;
    for (int  i = 6; i <= n; i++)
     {
        int x=0;
        for (int  j = 0; j < prime.size(); j++)
        {
            if (i%prime[j]==0)

            {
                x++;
            }
            if(x>2)break;
        
        }
        if(x==2)ans++;
     }

     cout<<ans;


        
    }

 
