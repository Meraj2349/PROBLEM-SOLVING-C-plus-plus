#include <bits/stdc++.h>
using namespace std;

void sieve(vector<int> &prime,int N)
{
      vector<bool> prime_bool(N+1,true);

      prime_bool[0]=prime_bool[1]=false;

      for (int i = 2; i*i<=N; i++)
      {
           if (prime_bool[i]==true)
           {
             for (int j = i*i; j <=N;j+=i)
             {
                 prime_bool[j]=false;
             }
             
           }
           
      }

      for (int i=2;i<=N ;i++)
      {
        if (prime_bool[i]== true)
        {
          prime.push_back(i);
        }
      }
      
      

}


int main(){

    int N=1e7;

    vector<int>prime;

    sieve(prime,N);

  int t;
   cin>>t;
   while (t--)
   {

       int n;
       cin>>n;
     cout<<prime[n-1]<<endl;

   }
     
    
}