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
int32_t main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int x;
        cin>>x;
        string s;
        cin>>s;
       int length=s.size();

        cout<<s[0];

        
       for (int  i = 1; i < length; i++)
       {
          if(s[i+1]=='a' || s[i+1]=='e')cout<<'.';

          cout<<s[i];
          
            
          
       }
       
   cout<<endl;
       
        /* code */
    }
    

}