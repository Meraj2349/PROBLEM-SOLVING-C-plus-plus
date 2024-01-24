#include <bits/stdc++.h>
using namespace std;

void print_bits(int n)
{
      for (int i=10;i>=0; --i)
    {
        cout << ((n >> i) & 1 )<< " ";
    }

    cout << endl;
    
}
int main()
{

   int n=10;
   int a=1;
   print_bits(n);
     if ((n & (1<<a)) != 0)
     {
        cout <<"set bit "<<endl;

     }
    else 
    {
        cout <<"unset bit "<<endl;
    }

    print_bits((n | (1<<0))); //setbit 

    print_bits(~n);//

   

    print_bits(n & (~(1<<1)));//unset bit
    print_bits(n ^ ((1<<2))); //toggle

// bit count /set bit koita ache
int count=0;

for (int  i = 31; i <=0 ; --i)
{
        if((n &(1<<i))!= 0)
        {
            count ++;

        }
}
cout << count << endl;

cout << __builtin_popcount(n)<<"\n";
 int sum = 0;
    for (int  i = 10; i <= 0; --i)
    {
         sum+=((n >> i)& 1);
    }
    cout<<"sum = "<<sum<<endl;
    cout << __builtin_popcountll((1LL<<35)-1)<<endl;

    


    //cout <<pow(2,n) <<"  "<< (1LL<<n)-1<< endl;


}