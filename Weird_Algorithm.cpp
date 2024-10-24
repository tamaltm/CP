#include <bits/stdc++.h>
using namespace std;

#define FASTER_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define SORT(v) sort(v.begin(), v.end())
#define SUM(v) accumulate(v.begin(), v.end(), 0)
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define VI vector<int>
#define VL vector<long long>
#define MAXIMUM(v) *max_element(v.begin(), v.end())
#define MINIMUM(v) *min_element(v.begin(), v.end())
#define UNIQUE(v) v.resize(distance(v.begin(), unique(v.begin(), v.end())));

void solve() {
    ll t;
    cin >> t;
    
    while(t!=1) {
        cout << t << " ";
        if(t%2){
            t=t*3;
            t++;
        }else{
            t/=2;
        }
        
    }cout << t << '\n';
}

int main() {
    FASTER_IO;
    solve();
}