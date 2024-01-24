#include <bits/stdc++.h>
using namespace std;
#define int long long int

vector<int>prime_vector;
void sieve(int n)
{
    vector<int>prime(n,0);


    for (int i = 2; i*i <=n; i++)
    {
      
       if(prime[i]==0)
       {
        prime_vector.push_back(i);

        for (int  j = i*i; j <=n; j+=i)
        {
            prime[j]=1;
        }
        
       }
    }
    
    
}
void segment_sieve(int l,int r)
{
    if(l==1) l++;
    int mx=r-l+1;
    int arr[mx+1]={0};

    for(auto p: prime_vector)
    {
        if(p*p<=r)
        {
            int i=(l/p)*p;
            if(i<p) i+p;

            for (; i <= r; i+=p)
            {
                if(i!=p)
                {
                    arr[i-l]=1
                }
            }
            
        }
    }
    for (int  i = 0; i <=mx; i++)
    { 
        
        if(arr[i]==0)
        {
            cout<<l+i<<endl;
        }
    }
    

    

}
int32_t main(){



    
}