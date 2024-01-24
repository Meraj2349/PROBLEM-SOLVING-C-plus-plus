#include <bits/stdc++.h>
using namespace std;
int main(){
 int t; cin>>t;
 while (t--)
 {
    int x,y,z;
      cin>>x>>y>>z;   
    if(x==y)
    cout<<z<<endl;
    if(y==z)
    cout<<x<<endl;

    if (z==x)
    {
       cout<<y<<endl;
    }
    
 } 
}