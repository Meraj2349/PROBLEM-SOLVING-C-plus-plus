#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int c;
        cin >> c;

        string  path;
        cin >> path;
    
        int n = path.size();
        int coins = 0;
        int i = 0, bound = 0;

        while (i < n)
        {

            if (path[i] == '@')
            {
                coins++;
                i++;
                bound = 0;
            }
            else if (path[i] == '.')
            {
                i++;
                 bound = 0;
            }
            else
            {
                i++;
                bound++;
                if (bound == 2)
                {
                    break;
                }
            }
        }

        cout << coins << endl;
    }

    return 0;
}
