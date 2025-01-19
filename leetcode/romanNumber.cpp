#include <bits/stdc++.h>
#define mii map<int, int>
#define vi vector<int>
// #define int long long int
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define mod 100000007
using namespace std;
int32_t main()
{

    int ans;
    string s;
    cin >> s;
    map<char, int> maping_number;

    maping_number['I'] = 1;
    maping_number['V'] = 5;
    maping_number['X'] = 10;
    maping_number['L'] = 50;
    maping_number['C'] = 100;
    maping_number['D'] = 500;
    maping_number['M'] = 1000;

    for (int i = 0; i < s.size()-1; i++)
    {
        if (maping_number[s[i]] < maping_number[s[i + 1]])
        {
            ans += maping_number[s[i + 1]] - maping_number[s[i]];
            i++;
        }
        else
        {
            ans += maping_number[s[i]];
        }
        /* code */
    }

    cout << ans << endl;

    // for (auto v : maping_number)
    // {

    //     cout << v.f << v.s;
    // }
}
