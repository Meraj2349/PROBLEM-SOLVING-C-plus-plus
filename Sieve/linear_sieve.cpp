#include <bits/stdc++.h>
using namespace std;
const int N=10;
vector<int>lp(N+1);
vector<int>prime;

int main(){

    for (int i = 2; i <=N; i++) {
        cout << "Checking if " << i << " is prime..." << endl;
        if (lp[i]==0) {
            lp[i]=i;
            prime.push_back(i);
            cout << i << " is prime. Adding to the list of primes." << endl;
        }
        for (int j = 0; i*prime[j] <=N; j++) {
            lp[i*prime[j]]=prime[j];
            cout << "Setting lp[" << i*prime[j] << "] = " << prime[j] << endl;
            if(prime[j]==lp[i*prime[j]]) {
                cout << "Breaking out of the loop." << endl;
                break;
            }
        }
        cout << "--------------------------------------" << endl;
    }

    cout << "Prime numbers from 1 to 10:" << endl;
    for (int p : prime) {
        cout << p << endl;
    }

    return 0;
}
