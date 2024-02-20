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
   int t;
   cin>>t;
   while (t--)
   {
    int a=0,b=0;
    string s;
    cin>>s;
    for (int  i = 0; i < s.size(); i++)
    {
        if(s[i]=='A')
        {
            a++;
        }

        else{
            b++;
        }
        /* code */
    }

    if(a>b)
    {
        cout<<"A"<<endl;
    }
    else
    {
        cout<<"B"<<endl;
    }
    
    /* code */
   }
   
}