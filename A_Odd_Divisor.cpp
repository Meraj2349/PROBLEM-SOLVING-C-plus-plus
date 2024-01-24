#include <bits/stdc++.h>
using namespace std;
#define int long long int 
int32_t main(){
  

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum=0;
        while(n > 1)
        {
           
            if (n%2==1)
            {
                sum=1;
                break;
            }

            else
            n=n/2;
            
        }
        

        if(sum==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
    }
    
    
}