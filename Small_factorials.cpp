#include<bits/stdc++.h>
using namespace std;
#define int long long int 

int fac(int n)
{

    if(n==1)return 1;

    if (n==0) return 1;
   else 
   return n*fac(n-1);
}

int32_t main()
{

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;

        cout<<fac(n)<<endl;
    }
    

    
}