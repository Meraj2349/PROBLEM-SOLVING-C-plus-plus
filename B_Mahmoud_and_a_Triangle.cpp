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
    vi v;

  int n;
  cin>>n;
 for (int  i = 0; i < n; i++)
 {
    int x;
    cin>>x;
    v.pb(x);
 }
 int count =0;

 sort(v.begin(),v.end());
 for (int  i = 0; i < v.size()-2; i++)
 {
    if(v[i]+v[i+1]>v[i+2])
    {
        cout<<"YES";
        break;
    }
    else
    count++;
 }

 if(count == v.size()-2)
 {
    cout<<"NO";
 }
 
 
  
}