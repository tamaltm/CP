#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FASTER_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const vector<pair<int, int>> knight_moves = {
    {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
    {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
};

void solve() {
    int n, m;
    cin >> n >> m;

    set<pair<int, int>> occupied_cells;

    while (m--) {
        int i, j;
        cin >> i >> j;

       
        occupied_cells.insert({i, j});

        
        for (auto [dx, dy] : knight_moves) {
            int x = i + dx, y = j + dy;
            if (x >= 1 && x <= n && y >= 1 && y <= n) {
                occupied_cells.insert({x, y});
            }
        }
    }

    
    int total_cells = n * n;
    int occupied_count = occupied_cells.size();
    int free_spaces = total_cells - occupied_count;

    cout << free_spaces << endl;
}

int32_t main() {
    FASTER_IO;
    solve();
}
