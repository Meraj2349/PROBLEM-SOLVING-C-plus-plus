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

 while(t--)
 {
        int n; 
        cin>>n;
    
    string x,y;
    
    cin>>x>>y;
    int count=0;
    int a=0,b=0;
    for(int i=0; i<n; i++)
    {
        if(x[i]==y[i] && y[i]=='1' )
        count++;
        if(x[i]=='1') 
        a++;
        if(y[i]=='1') 
        b++;
    }
        
        if(a>b)
        {
        cout<< a-b + b-count<<endl; 
        }
        else if (a==b)
        {
        cout<< abs(a-count)<<endl;
        }
        else
        { 
            cout<<b-count<<endl;
        }
 }
}