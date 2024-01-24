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
#define rep(i,a, b) for (int i=a; i<b; 1++)
#define all(c) c.begin().c. end ()
using namespace std;
int32_t main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,temp,sum=0,remainder;
        cin>>n;
        temp=n;

        while (n!=0)
        {
            remainder=n%10;

            sum=(sum*10)+remainder;

            n=n/10;
            /* code */
        }
        
        /* code */

        if (temp==sum)
        {
            cout<<"wins"<<endl;
            /* code */
        }

        else cout<<"loses"<<endl;
        
    }
    

}