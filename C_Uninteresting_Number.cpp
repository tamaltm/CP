#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve() {
    string input;
    cin >> input;

    vector<int> s;
    for (char c : input) {
        s.push_back(c - '0');
    }

    int sm = 0, twos = 0, threes = 0;
    for (int x : s) {
        sm += x;
        if (x == 2) twos++;
        if (x == 3) threes++;
    }

    for (int i = 0; i <= min(10, twos); i++) {
        for (int j = 0; j <= min(10, threes); j++) {
            if ((sm + i * 2 + j * 6) % 9 == 0) {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
