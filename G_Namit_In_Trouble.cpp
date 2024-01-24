#include <bits/stdc++.h>
using namespace std;
#define int long long int 

void sieve(vector<int> &prime,int n)

{

    vector<bool> prime_bool(n+1,true);
    prime_bool[0]=prime_bool[1]=false;
    for (int  i = 2; i <= n ; i++)
    {
        if (prime_bool[i]==true)
        {
            prime.push_back(i);
            for (int  j = i*2; j <=n; j+=i)
            {
                prime_bool[j]=false;
            }
            
        }
    }
}

int32_t main(){


    int N=1e7;
    vector<int>prime;

    sieve(prime,N);


    int t;
    cin>>t;
    while (t--)
    {
        int k,n;
        cin>>k>>n;
        
        int count1=0,count2=0;

        for (int i = 0; i < prime.size() && prime[i]*prime[i] <= k; i++)
        {
            count1++;
            if (prime[i] * prime[i] > n)
            {
                count2++;
            }
            
        }

        cout<<count1<<" "<<count2<<endl;
        

    }
    


    
    


    
}