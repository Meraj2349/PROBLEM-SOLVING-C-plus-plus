#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    
    vector<int>prime_fector;

    for (int  i = 2; i*i <=n; i++) //i==3; then n=3 but i*i ==9 so i*i<=n it false
    {
        while(n%i==0)
        {
           prime_fector.push_back(i);

           n=n/i;
        }
        
    }

    if(n > 1)
    {
        prime_fector.push_back(n);
    }
    for(int p: prime_fector)
    {
        cout<<p<<endl;
    }
    
}