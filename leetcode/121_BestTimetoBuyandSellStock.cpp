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
int32_t main()
{
    vector<int> array = {1};
    int len= array.size();
    int temp1,temp2;
    int k;
     temp1= array[0];
    for (int  i = 1; i < len; i++)
    {
         
         if(temp1 > array[i])
         {
            temp1=array[i];
             k=i;
         }
        
    }
    temp2= array[k];
    for (int j = k+1; j < len; j++)
    {
        if(temp2 < array[j])
        {
            temp2=array[j];
        }
        
    }
    int temp =temp2-temp1;

    if(k==len-1)
    cout<<0;
    else
    cout<<temp;
    
}