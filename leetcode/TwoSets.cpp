#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define pb push_back

int main(){
    ll n;
    cin>n;
    ll sum=(n*(n+1))/2;
    if(sum%2==1 || n==1){
        cout<<"NO"<<endl;
        return 0;
    }
    ll a[n],b[n];
    else{
        if(n%2==0){
            ll x=0;
            for(ll i=0;i<n;i=i+4){
                
                a.pb(i+1);
                a.pb(i+2);
                b[x]=i+2;
                b[x+1]=i+3;
                b.pb
                
                x=x+2;
            }
        }
        else{
            a[0]=1;
            a[1]=2;
            b[0]=3;
            ll x=3;
            for(ll i=3;i<n;i=i+4){
                a[x]=i+1;
                b[x]=i+2;
                b[x+1]=i+3;
                a[x+1]=i+4;
                x=x+2;
            }

        }
    }
}