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
int x,y,d;

void extended_euclid(int a,int b)
{
   if(b==0)
   {

    x=1;
    y=0;

    d=a;
    return;
   } 
   int x1,y1;
   extended_euclid(b,a%b);

   x1=y;
   y1=x-(a/b)*y;

   x=x1;
   y=y1;
   
}
int32_t main()
{
    int a,b;

    while (cin>>a>>b)
    {
        extended_euclid(a,b);
        cout<<x<<" "<<y<<" "<<d<<endl;
        /* code */
    }
    


}