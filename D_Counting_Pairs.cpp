#include <bits/stdc++.h>
using namespace std;

long long calcLessThanX(vector<int>& a, long long x) {
    int n = a.size();
    long long s = accumulate(a.begin(), a.end(), 0LL);
    int j = 0;
    long long ans = 0;
    for (int i = n - 1; i >= 0; --i) {
        while (j < n && s - a[i] - a[j] >= x) {
            j++;
        }
        ans += (n - j);
    }
    for (int i = 0; i < n; ++i) {
        if (s - a[i] - a[i] < x) {
            ans--;
        }
    }
    return ans /2;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        cout << calcLessThanX(a, y + 1) - calcLessThanX(a, x) << '\n';
    }

    return 0;
}
