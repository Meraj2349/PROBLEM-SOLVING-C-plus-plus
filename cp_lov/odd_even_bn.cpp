#include <bits/stdc++.h>
using namespace std;

 void print_binary(int n)
 {
    for (int  i = 10; i >= 0; --i)
    {
            cout<<((n >>i)& 1);
    }

    cout<<endl;
    
 }  
int main(){

   for (int  i = 0; i < 10; i++)
   {
      
       //print_binary(i); 

       if(i&1)
       {
        cout <<"odd"<<endl;

       }
       else
       cout <<"even"<<endl; 
   }
   int n=8;
   

   cout<<(n &(n-1))<<endl;

   //divition with 2

  // int n=5;
   //cout <<(n>>1) <<endl;

   //into (*)>> 2

   //cout<<(n<<1)<<endl;
//high low method 

//(high + low)>>1;

   

}