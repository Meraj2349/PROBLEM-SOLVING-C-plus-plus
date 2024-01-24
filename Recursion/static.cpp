#include <bits/stdc++.h>
using namespace std;

 int x=0;

int  function_test(int n)
{
    

    if(n>0)
    {
      x++;  
        return function_test(n-1)+x;
    }
    return 0;
   
}
int main(){
 int n;
 cin>>n;
 cout <<function_test(n)<<endl;   
}