
#include <bits/stdc++.h>
using namespace std;
#define int long long int 

void sieve(vector<int>&prine ,int n)
{
    vector <bool>prime_bool(n+12,true);
    prime_bool[0]=prime_bool[1]=false;
    for (int  i = 2; i*i <= n; i++)
    {
        if(prime_bool[i]==true)
        {
            for (int  j = i*i; j <=n; j+=i)
            {
                prime_bool[j]=false;
            }
            
        }
    }
    
    
}
int main(){
    
}