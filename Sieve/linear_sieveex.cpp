#include <bits/stdc++.h>
using namespace std;

const int n=10;
vector<int>prime_number;
vector<int>li_prime(n+1);


int main(){

     
    for (int i = 2; i <= n; i++)
    {
        if (li_prime[i]==0)
        {
           li_prime[i]=i;
           prime_number.push_back(i);
            /* code */
        }
        
    for (int j = 0; i*prime_number[j]<=n; j++)
    {
        li_prime[i*prime_number[j]]=prime_number[j];
        if (prime_number[j]==li_prime[i*prime_number[j]])
        {
            break;
        }
        
    }
    }   

    for (auto p: prime_number)
    {
        cout<<p<<endl;
    }
    


    
}