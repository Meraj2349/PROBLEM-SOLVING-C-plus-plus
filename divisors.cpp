#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count =0,sum=0;
    cin>>n;
    for (int  i = 1; i <=sqrt(n); i++)
    {
        if(n%i == 0)
        {
            cout<<i<<" "<<n/i<<endl;
            count+=1;
            sum+=i;   //i*i nad sqrt(n) smae 
            if(n/i != i)
            {
                sum+=n/i;
                count+=1;

            }

        }
    }

    cout<<sum<<endl;
    cout<<count<<endl;
    

}