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

    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";

    string R = "R";
    string L = "L";

    int len = s.length();

    string side, mol;
    cin >> side >> mol;

    int molLen = mol.length();

    vector<char> ans;

    for (int i = 0; i < molLen; i++)
    {

        for (int j = 0; j < len; j++)
        {

           if (mol[i] == s[j])
            {
                if (side == R && j > 0)  // Ensure j-1 is valid
                {
                    ans.push_back(s[j - 1]);
                }
                else if (side == L && j < len - 1)  // Ensure j+1 is valid
                {
                    ans.push_back(s[j + 1]);
                }
                break;  // Exit the loop once match is found
            }
        }

        /* code */
    }

    for (auto a : ans)
    {
        cout << a;
    }
}