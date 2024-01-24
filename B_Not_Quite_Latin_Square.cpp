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
#define rep(i,a,b) for (int i=a; i<b; 1++)
#define all(c) c.begin().c. end ()
using namespace std;
int32_t main()
{
  int t;
  cin>>t;

  while (t--)
  {
     for (int i = 0; i < 3; i++)
  {
    char a,b,c;
    cin>>a>>b>>c;
    if (a=='?'|| b=='?'||c=='?')
    {
        if (a=='A' && b== 'B' || b=='A' && c== 'B' || a=='A' && c=='B'|| a=='B' && b== 'A' || b=='B' && c== 'A' || a=='B' && c=='A')
        {
           cout<<"C"<<endl;

        }

        else if (a=='B' && b== 'C' || b=='B' && c== 'C' || a=='B' && c=='C'|| a=='C' && b== 'B' || b=='C' && c== 'B' || a=='C' && c=='B')
        {
           cout<<"A"<<endl;

        }
        else if (a=='A' && b== 'C' || b=='A' && c== 'C' || a=='A' && c=='C'|| a=='C' && b== 'A' || b=='C' && c== 'A' || a=='C' && c=='A')
        {
           cout<<"B"<<endl;

        }


        
    }
  
  }
    
  }
  

 
  
}