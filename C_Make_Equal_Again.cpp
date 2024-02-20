#include <bits/stdc++.h>
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arra[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> arra[i];
            /* code */
        }
        sort(arra,arra+n);

        for (int  i = 0; i < n-1; i++)
        {
            if(arra[i]==arra[i+1])
            {
                count++;

            }
            else
            {

            }
            /* code */
        }
        


    }
}