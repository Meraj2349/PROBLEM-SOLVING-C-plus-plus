#include <bits/stdc++.h>

using namespace std;

vector<int> prime_number;

void normal_sieve(int n)
{
    bool prime[n+1];

    memset(prime,true,sizeof(prime));


    for (int  i = 2; i*i <= n; i++)
    {
        if(prime[i]==true)
        {
            for (int j = i*i; i <=n; j+=i)
            {
                prime[j]=false;

            }
            
        }
    }

    for (int  i = 0; i <=n; i++)
    {
        if(prime[i]==true)

        {
            prime_number.push_back(i);

        }
    }
    
    
}


void segment_sieve(int l,int r)
{
    if(l==1) l++;


    int max=r-l+1;
    int array[max];
    memset(array,0,sizeof(array));

    for(auto p: prime_number )
    {

        if(p*p <=r)
        {
            int g= (l/p)*p;
            if(g<l) g+=p;
            for(;g<=max;g+=p)
            {
                if(g!=p)
                {
                    array[g-l]=1;

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

int main()
{

    normal_sieve(100000);
    int t;
    cin>>t;
    while (t--)
    {
        int l,r;
        cin>>l>>r;
        segment_sieve(l,r);
        cout <<endl;

    }

   
    

}