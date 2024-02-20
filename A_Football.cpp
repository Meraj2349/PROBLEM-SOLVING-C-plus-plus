#include<bits/stdc++.h>
#define mii map<int, int> 
#define vi vector<int> 
#define int long long int 
#define f first
#define sec second 
#define pb push_back 
#define mp make_pair 
#define mod 100000007
using namespace std;
int32_t main()
{
   int n,c=1,d=0;
   cin>>n;

   map<string,int>m;
string s,t,v;
int swap =0;
 while(n--)
 {
     
    cin>>t;

    m[t]++;

    if(m[t]>swap)
    {
      swap=m[t];

      s=t;
    }

 }
 cout<<s;

}