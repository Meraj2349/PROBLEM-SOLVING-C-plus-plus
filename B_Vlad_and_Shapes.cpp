#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int add = 0, sum = n + 2;

        for (int i = 0; i < n; i++)
        {
            string row;
            cin >> row;
            int sumOne = count(row.begin(), row.end(), '1');

            if (sumOne)
                sum = min(sum, sumOne);
            add += sumOne;
        }
        if (sum * sum != add)
        {
            cout << "TRIANGLE" << endl;
        }
        else
        {
            cout << "SQUARE" << endl;
        }
    }
    return 0;
}
