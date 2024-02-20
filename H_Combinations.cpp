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
int factorial(int N)
{
    int sum=1;
       for (int i = 1; i <=N; i++)
       {
         sum*=i;

        /* code */
       }
       return sum;
}

int32_t main()
{
  int t,count=1;
  cin>>t;
  while(t--)
  {
     int n,r;
     cin>>n>>r;

     int factorN=factorial(n);
     int factorR=factorial(r);
     int factorNR=factorial(n-r);

     int NcR= factorN/(factorNR*factorR);

     cout<<"Case "<< count<<": "<<NcR<<endl;

     count++;

  }
}