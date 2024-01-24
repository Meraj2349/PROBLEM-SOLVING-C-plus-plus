#include<bits/stdc++.h>
#define mii map<int, int> 
#define vi vector<int> 
#define int long long int 
#define f first
#define s second 
#define pb push_back 
#define mp make_pair 
#define mod 100000007
using namespace std;
void primeNumber(vector<int>&vec,int n)
{
   vector<bool> prime(n-1,true);

    for (int  i = 2; i <= n; i++)
    {
         if(prime[i]==true)

         {
            for (int  j = i*i; j <=n;j+=i)
            {
                prime[j]=false;
                /* code */
            }
         }
    }

    for (int i =2; i < prime.size(); i++)
    {
        if(prime[i]==true)
        {
           vec.pb(i);
        }

    }
    
    

}
int32_t main()
{
   vector<int>primeN;
   
   
   int b;
   cin>>b;

   primeNumber(primeN,b);

   int ans=0;

   for (int i = 6; i <= b; i++)
   {
     int x=0;
        for (int j = 0; j < primeN.size(); j++)
        {

            if(i%primeN[j]==0)
            {
                x++;
               
            }

             if(x > 2)break;  
        }

        if(x==2) ans++;
        
   }

   cout<<ans;
   

}