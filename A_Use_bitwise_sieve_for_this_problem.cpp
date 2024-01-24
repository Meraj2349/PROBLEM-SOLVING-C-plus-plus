#include<bits/stdc++.h>
#define mii map<int, int> 
#define vi vector<int> 
#define int long long int 
#define f first
#define s second 
#define pb push_back 
#define mp make_pair 
#define mod 100000007
#define fast ios:: sync_with_stdio(0); cin. tie(0):
#define rep(i,a,b) for (int i=a; i<b; i++)
#define all(c) c.begin(). c.end ()
using namespace std;

int n=100000000;

vi v(n,0);

void sieve(int n)
{
    

    for (int  i = 2; i*i <= n; i++)
    {
        if (v[i]==0)
        {
           for (int j = i*i; j <=n; j+=i)
           {
              v[j]=1;
           }
           
        }
        
        
    }
    
}


int32_t main()
{
    sieve(n);

   for (int  i = 2; i <=  n; i++)
   {
       if(v[i]==0)
       {
        cout<<i<<endl;
       }
   }
   
    


}