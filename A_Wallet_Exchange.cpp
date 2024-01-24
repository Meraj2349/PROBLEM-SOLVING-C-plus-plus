#include <iostream>

std::string find_winner(int a, int b) {
    // Check if the sum of coins is even
    if ((a + b) % 2 == 0) {
        return "Bob";
    } else {
        return "Alice";
    }
}

int main() {
    // Input the number of test cases
    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        // Input the number of coins in Alice's and Bob's wallets
        int a, b;
        std::cin >> a >> b;

        // Output the winner for each test case
        std::cout << find_winner(a, b) << std::endl;
    }

    return 0;
}
