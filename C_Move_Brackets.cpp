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
        vi v;
        v.empty();

        int n, count = 0;
        cin >> n;
        string s;
        cin >> s;

        if (n % 2 == 0)
        {
            for (int i = 0; i < s.size(); i++)
            {
                if(s[i]=='(')
                count++;
                else
                {
                    count--;
                    if(count< 0)
                    count=0;

                }
            }
        }

        cout << count << endl;
        /* code */
    }
}