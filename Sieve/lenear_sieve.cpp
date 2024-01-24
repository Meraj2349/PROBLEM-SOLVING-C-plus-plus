#include <bits/stdc++.h>
using namespace std;
const int N= 1000;
vector<int>Prime_fector(N+1);
vector<int> prime;

int main(){

    for (int  i = 2; i <=N; i++)
    {
        /* code */
        if (Prime_fector[i]==0)
        {
            /* code */
            Prime_fector[i]=i;
            prime.push_back(i);
            
        }

        for (int j = 0; i*prime[j]<= N; j++)
            {

                Prime_fector[i*prime[j]]=prime[j];

                if(prime[j]==Prime_fector[i*prime[j]])
                {
                    break;
                }

                
            }
        
    }
    for (int p : prime)
    {
        /* code */
        cout<<p<<endl;

    }
    
    
}