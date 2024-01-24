#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if (b==0) return a;

    return gcd(b,a%b);
    
}

int main(){
 int t;
 cin>>t;
 while (t--)
 {
    int n,m;
    cin>>n>>m;

    int t1=n, t2= m;

   cout<< gcd(n,m)<<endl

   while (n%m!=0)
   {
      int c=n%m;
      n=m;
      m=c;

   }
   //cout<<m<<endl;

   int lcm= (t1*t2)/m;

    cout<<lcm;

 }
    
}