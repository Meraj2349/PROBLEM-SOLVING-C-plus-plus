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

// int calculateProfit(int index, int buy, int arr[], int n, vector<vector<int>>& dp) {
//     if (index == n)
//         return 0;

//     if (dp[index][buy] != -1)
//         return dp[index][buy];

//     int profit = 0;

//     if (buy) {
//         profit = max(-arr[index] + calculateProfit(index + 1, 0, arr, n, dp),
//                      0 + calculateProfit(index + 1, 1, arr, n, dp));
//     } else {
//         profit = max(arr[index] + calculateProfit(index + 1, 1, arr, n, dp),
//                      0 + calculateProfit(index + 1, 0, arr, n, dp));
//     }

//     return dp[index][buy] = profit;
// }

int32_t main()
{
    int n = 5,count = 0,retch = 0;
    int nums[n] = {2, 3, 1, 1, 4};

    // vector<vector<int>> dp(n, vector<int>(2, -1));

    // int n= nums.size();
    for (int i = 0; i <n; i++)
    {
        retch = max(retch, i + nums[i]);
        
    }

    cout<<count;
}
