#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, f, a, b;
        cin >> n >> f >> a >> b;

        vector<int> moments(n);

        for (int i = 0; i < n; ++i) {
            cin >> moments[i];
        }

        int total_energy = f;
        int messages_sent = 0;

        for (int i = 0; i < n; ++i) {
            if (total_energy < a) {
                if (total_energy < b) {
                    cout << "NO" << endl;
                    break;
                } else {
                    total_energy -= b;
                    ++messages_sent;
                }
            } else {
                total_energy -= a;
                ++messages_sent;
            }

             If this is the last message and we have enough energy, print "YES"
            if (i == n - 1 && messages_sent == n) {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}
