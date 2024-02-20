#include <iostream>
#include <string>
#include <vector>

using namespace std;

int longestBeautifulSubstring(const string& s) {
    int maxLength = 1, currentLength = 1;
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == s[i - 1]) {
            ++currentLength;
            maxLength = max(maxLength, currentLength);
        } else {
            currentLength = 1;
        }
    }
    return maxLength;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, Q;
        cin >> N >> Q;
        string S;
        cin >> S;

        // Calculate and output the initial length of the longest beautiful substring
        cout << longestBeautifulSubstring(S) << " ";

        // Perform queries
        while (Q--) {
            char c;
            cin >> c;
            S.push_back(c);
            // Calculate and output the length of the longest beautiful substring after each query
            cout << longestBeautifulSubstring(S) << " ";
        }
        cout << endl; // End of test case
    }

    return 0;
}
