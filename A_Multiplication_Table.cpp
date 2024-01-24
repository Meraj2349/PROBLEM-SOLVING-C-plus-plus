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
    int table,number,count=0;
    cin>>table>>number;
    for (int  i = 1; i <= table; i++)
    {
       if (number % i == 0 && number / i <= table) {
            count++;
        }
       
       
    }

    cout<<count;
    
}