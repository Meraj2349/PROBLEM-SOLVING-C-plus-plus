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
        int n, m, sum = 0;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            
        }

        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (sum % m == 0)
            {
                if(s[i]=='L')
                {
                    arr[i]=0;
                }
                else{
                    arr[n-i]=0;
                }
            }
            else{
                i++;
            }

            /* code */
        }
    }
}