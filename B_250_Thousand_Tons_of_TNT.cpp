#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n;
        cin >> n;  // Number of boxes

        vector<int> weights(n);
        for (int i = 0; i < n; ++i) {
            cin >> weights[i];  // Weights of the boxes
        }

        sort(weights.begin(), weights.end());  // Sort the weights in non-decreasing order

        int k;
        cin >> k;  // Number of boxes per truck

        long long max_absolute_difference = 0;

        for (int i = 0; i < n - k; ++i) {
            max_absolute_difference += weights[i];
        }

        for (int i = n - 1; i >= k; --i) {
            max_absolute_difference -= weights[i];
        }

        cout << max_absolute_difference << endl;
    }

    return 0;
}
