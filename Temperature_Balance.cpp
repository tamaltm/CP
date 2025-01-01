#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void solve() {
    int T; 
    cin >> T;
    while (T--) {
        int N; 
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        long long time = 0; 
        long long balance = 0; 

        for (int i = 0; i < N; i++) {
            balance += A[i];
            time += abs(balance); 
        }

        cout << time << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
