#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int n=1e5;

vector<bool>prime(n,false);

vector<int> prime_push;

void sieve(int n)
{
    //memset(prime,true,sizeof(n));

    for (int  i = 2; i*i < n; i++)
    {
        if (prime[i]==true)
        {
            for (int  j = i*i; j < n; j+=i )
            {
                prime[j]=false;
            }
            
        }
        
    }

    for (int  i = 0; i < prime.size(); i++)
    {
        if(prime[i]==true)
        {
           prime_push.push_back(i);
        }
    }
    
    
}

void Segment_sieve(int l,int r)
{
    if(l==1) l++;
    int max=r-l+1;

    int array[max];
for (int  i = 0; i <=max; i++)
{
    array[i]=0;
}

    for (auto p : prime_push)
    {
        if(p*p <= r)
        {
            int gunitok= (l/p)*p;
            if(gunitok<l) gunitok+=p;
            for (; gunitok <r ; gunitok+=p)
            {
                if(gunitok!=p)
                {
                    array[gunitok -l]=1;
                }
            }
            

        }
        
    }
    
    for (int  i = 0; i <=max; i++)
    {
        if(array[i]==0)
        {
            cout<<l+i<<endl;
        }
    }
    
    
}
int32_t main(){

    int t;
    cout<<t;

    while (t--)
    {
         int left,right;
        cin>>left>>right;

        Segment_sieve(left,right);
    }
    
    
}