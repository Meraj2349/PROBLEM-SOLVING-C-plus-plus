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
    string squire_string ;

    cin>>squire_string;

    bool ok= true;

    if(squire_string.size()%2==0)
    {
        for (int  i = 0; i <squire_string.size()/2; i++)
        {
            if(squire_string[i] != squire_string[i+squire_string.size()/2])
               ok=false;
    
            /* code */
        }
        
    }

    else
    ok=false;

    cout<< (ok ? "YES":"NO")<<endl;
    
    
 }
}