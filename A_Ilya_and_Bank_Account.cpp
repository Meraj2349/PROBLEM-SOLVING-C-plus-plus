#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    if(n>= 0)
    {
        cout<<n;
    }
    else
    {
        int last=n/10;
        

        int lastdisit= n%10;
        int cancle_last_two= n/100;
        int main_number= (cancle_last_two*10)+lastdisit;

        if(last > main_number)
        {
            cout<<last;
        }

        else
        cout<<main_number;



    }
    
}