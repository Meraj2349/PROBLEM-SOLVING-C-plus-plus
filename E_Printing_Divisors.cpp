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
int32_t main()
{
   int t,count=1;
   cin>>t;
   while (t--)
   {
    
       int n;
       cin>>n;

       cout<<"Case "<<count<<":"<<endl;

       for (int i = 1; i*i <= n; i++)
       {
             if(n%i==0)
             {
                cout<<i<<" ";
                if(n/i!=i)
                {
                   cout<<n/i<<" ";
                }
             }


        /* code */
       }
        cout<<endl;

       count++;  
   }
   
}