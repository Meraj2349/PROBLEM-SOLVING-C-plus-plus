#include <bits/stdc++.h>
using namespace std;
#define int long long int 
int bigmod(int base,int power,int mode )
{
    if(power ==0)return 1;
    else if (power%2)
    {
        int x= base % mode;
        int y= bigmod(base,power-1,mode);
        return (x*y)%mode;
    }
    else
    {
        int z= bigmod(base,power/2,mode);
        return (z*z)%mode;

    }
    
}
int32_t main(){
 int base,power,mod;

    while (cin>>base>>power>>mod)
    {
        int x= bigmod(base,power,mod);

        cout<<x<<endl;

        cin.ignore();

    }
    
    
}