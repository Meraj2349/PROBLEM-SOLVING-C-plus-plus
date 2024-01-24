#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x[4], y[4];

        for (int i = 0; i < 4; ++i) {
            cin >> x[i] >> y[i];
        }

        int side_length = max(abs(x[0] - x[1]), abs(y[0] - y[1]));

        int area = side_length * side_length;
        cout << area << endl;
    }

    return 0;
}
