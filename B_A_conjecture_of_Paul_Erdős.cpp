#include <bits/stdc++.h>
using namespace std;
#define int long long int 

int32_t main(){

   int n=1e7;
  vector<bool> prime(n+1,true);
    prime[0]=prime[1]=false;

    for (int i = 2; i*i<=n; i++)
    {
       if(prime[i]==true)
       {
          //prime_number.push_back(i);
        for (int j = i*i; j <= n ; j+=i)
        {
            prime[j]=false;
        }
        
       }
    }

    int count=0;

       set<int> equation_number;

       for (int i = 0; i*i <= n; i++)
       {
          for (int j = 0; j*j*j*j <= n ; j++)
          {
              int m= (i*i + j*j*j*j);

              if (prime[m]==true)
              {
                equation_number.insert(m);
              }
          }
          
       }
    vector<int>vec;

       for (int p: equation_number)
       {
           vec.push_back(p);
       }
       sort(vec.begin(),vec.end());

   int t;
   cin>>t;

   while (t--)
   {
       int x;
       cin>>x;
      

      int l=0,r=vec.size(),mid;

      if (x==1)
      {
        cout<<0<<endl;
      }
      
        else{

            while(l < r)
            {
                mid=(l+r+1)/2;
                if ( x  < vec[mid])
                {
                    r=mid-1;
                }
                else
                {
                    l=mid;
                }
                
            }
            cout<<l+1<<endl;
        }
            

        }
        
            
 }