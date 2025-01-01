#include <bits/stdc++.h>
using namespace std;
#define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long

// Function to calculate the maximum coins recursively
int maxCoins(int n) {
    if (n <= 3) return 1; // Base case: can't split further
    return 2 * maxCoins(n / 4); // Recursive case: double the coins from further splits
}

void solve() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n;
        cout << maxCoins(n) << endl; // Calculate the maximum coins
    }
}

int32_t main() {
    FasterIO;
    solve();
}
