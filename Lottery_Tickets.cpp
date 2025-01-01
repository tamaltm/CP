#include <bits/stdc++.h>
using namespace std;
#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v) {
            cin >> i;
        }

        int chef = v[0]; // Chef's ticket number
        sort(v.begin(), v.end()); // Sort the tickets

        int lower = 0, upper = 0;
        bool found_lower = false, found_upper = false;
        int chef_index = 0;

        // Locate Chef's position in sorted array
        for (int i = 0; i < n; i++) {
            if (v[i] == chef) {
                chef_index = i;
                break;
            }
        }

        // Identify closest neighbors
        if (chef_index != 0) {
            lower = v[chef_index - 1];
            found_lower = true;
        }
        if (chef_index != n - 1) {
            upper = v[chef_index + 1];
            found_upper = true;
        }

        long long ans = 0;
        if (found_lower && found_upper) {
            // Chef has both neighbors
            ans += max(0, chef - lower); // Range [lower + 1, chef]
            ans += max(0, upper - chef); // Range [chef + 1, upper]
        } else if (found_lower && !found_upper) {
            // Chef is the largest
            ans += chef; // Range [1, chef]
        } else if (!found_lower && found_upper) {
            // Chef is the smallest
            ans += 1000000 - chef + 1; // Range [chef, 10^6]
        } else {
            // Only one ticket exists
            ans = 1; // All numbers [1, 10^6] are valid
        }

        cout << ans << '\n';
    }
}

int32_t main() {
    FasterIO;
    solve();
    return 0;
}
