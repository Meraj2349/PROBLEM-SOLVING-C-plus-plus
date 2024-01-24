#include <bits/stdc++.h>
using namespace std;
int main(){
   long long facto=1;
   for(long long i=2;i<=1000000000;i++){
       facto*=i;
   }
   cout<<facto<<endl;   
}