#include <bits/stdc++.h>
using namespace std;
#define int long long int 

vector<int>prime_push;



int32_t main(){
    int n;
    cin>>n;
 
  //vector<int> julary;

  int size=n+1;
    vector<bool>prime(size+1,true);
    
   
    for (int  i = 2; i*i <= size; i++)
    {

        if(prime[i]==true)
        {
            for (int j = i*i; j <= size; j+=i)
            {
                prime[j]=false;

            }
            
        }
    }
   if (n <= 2)
   {
    cout<<1<<endl;
   }
   else
   cout<<2<<endl;

    for (int i = 2; i <= size; i++)
    {
       if (prime[i]==true)
       { 
          cout<<1<<" ";
          
       }
       else
       {
        cout<<2<<" ";
       }
       
    }
     
}