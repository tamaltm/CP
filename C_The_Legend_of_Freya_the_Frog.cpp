#include <bits/stdc++.h>
using namespace std;
#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, k;
        cin >> a >> b >> k;

        int moves_a = (a + k - 1) / k; 
        
        int moves_b = (b + k - 1) / k; 

        
        int total_moves = max(2 * moves_a - 1, 2 * moves_b); 

        cout << total_moves << endl;
    }
}

int32_t main() {
    FasterIO;
    solve();
}
