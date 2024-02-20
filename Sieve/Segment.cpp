#include <bits/stdc++.h>
using namespace std;
#define int long long int

vector<int> prime_push;

void sieve(int n)
{
    int prime[100000];
    memset(prime,0,sizeof(n));

    for (int  i = 2; i*i <=n; i++)
    {
        if (prime[i]==0)
        {
            for (int  j = i*i; j <=n; j+=i )
            {
                prime[j]=1;
            }
            
        }
        
    }

    for (int  i = 2; i <=n ; i++)
    {
        if(prime[i]==0)
        {
           prime_push.push_back(i);

           //cout<<prime[i]<<endl;
        }
    }



    
    
}

void Segment_sieve(int l,int r)
{
	if(l==1)l++;
	int mx=r-l+1;
	int ar[mx+1];
	for(int i=0;i<=mx;i++)ar[i]=0;
	for(int p:prime_push)
	{
		if(p*p<=r)
		{
			int i=(l/p)*p;
			if(i<l)i+=p;
			for(;i<=r;i+=p)
			{
				if(i!=p)
				{
					ar[i-l]=1;
				}
			}
		}
	}
 
	for(int i=0;i<mx;i++)
	{
		if(ar[i]==0)
		{
			cout<<l+i<<endl;
		}
	}
}
int32_t main(){

   sieve(100000);
    int t;
    cin>>t;

    while (t--)
    {
        int left,right;
        cin>>left>>right;

        Segment_sieve(left,right);

        cout<<endl;
    }
    
    
}