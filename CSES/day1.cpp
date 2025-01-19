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
    cout << n << " ";

    while (n > 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            cout << n << " ";
        }
        else
        {
            n = 3 * n + 1;

            cout << n << " ";
        }
        /* code */
    }
}