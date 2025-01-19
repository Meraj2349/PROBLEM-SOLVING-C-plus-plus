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
   string s = "   fly me   to   the moon  ";
    int len = s.length();
    int count=0;

    for (int  i = 0; i < len; i++)
    {
        if(s[i]==' ')
        {
            count=0;
        }
        else
        {
            count++;
        }
        /* code */
    }

    cout<<count<<endl;
    
}