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
    int n;
    cin >> n;
    int x[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
        /* code */
    }
    sort(x + 1, x + n);

    

    for (int i = 1; i <= n;)
    {
        if (x[i] != i)
        {
            cout << i << " ";
            break;
        }
        else
        {
            i++;
        }
    }
}