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
#define rep(i,a, b) for (int i=a; i<b; i++)
#define all(c) c.begin().c. end ()
using namespace std;
 

int32_t main()
{
   int t;

   cin>>t;
   while(t--)
   {

    int x;
    cin>>x;

    int sum=0;
    for (int  i = 0; i < x; i++)
    {
        int y;

        cin>>y;

       sum+=y;
    }

     cout<<((sqrt(sum)== floor(sqrt(sum))) ? "YES":"NO")<<endl;
    

   }

}