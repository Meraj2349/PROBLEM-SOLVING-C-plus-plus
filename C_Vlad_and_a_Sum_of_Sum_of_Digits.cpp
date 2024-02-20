#include<bits/stdc++.h>
#define mii map<int, int> 
#define vi vector<int> 
#define int long long int 
#define f first
#define s second 
#define pb push_back 
#define mp make_pair 
#define mod 100000007
using namespace std;
int N= 2e5;

// Function to calculate the sum of digits for a given number
int calculateDigitSum(int number) {
    int digitSum = 0;
    while (number) {
        digitSum += number % 10;
        number /= 10;
    }
    return digitSum;
}

int32_t main() {
    int testCases = 1;
    cin >> testCases;

    vector<int> dp(N + 2);
    dp[0] = 0;
    for (int i = 1; i <= N; i++) {
        dp[i] = dp[i - 1] + calculateDigitSum(i);
    }

    while (testCases--) {
        int n;
        cin >> n;
        cout << dp[n];

        if (testCases)
            cout << endl;
    }

    return 0;
}
