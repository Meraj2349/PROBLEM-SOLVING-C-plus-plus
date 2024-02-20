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
int x,y,d;

void bejuets_algo(int a,int b)
{
    if(b==0)
    {
        x=1;
        y=0;
        


        d=a;
        return ;
    }

    int x1,y1;

    bejuets_algo(b,a%b);

    x1=y;
    y1=x-(a/b)*y;

    x=x1;
    y=y1;


}

int32_t main()
{
  int a,b;
  while(cin>>a>>b){

    bejuets_algo(a,b);

  cout<<x<<" "<<y<<" "<<d<<endl;

  }

  
}