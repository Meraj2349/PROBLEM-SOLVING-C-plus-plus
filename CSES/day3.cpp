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
    int count=1, value=1;
    string s;
    cin >> s;
    for (int i = 0; i < s.size()-1; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
        else
        {
            value = max(value,count);
            count = 1;
        }
    }

    cout << (value > count ? value : count);
}