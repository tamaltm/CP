#include <bits/stdc++.h>
using namespace std;

#define FasterIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define FOR(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define a_sort(v) sort(v.begin(), v.end())
#define d_sort(v) sort(v.begin(), v.end(), greater<int>())
#define maximum(v) *max_element(v.begin(), v.end())
#define minimum(v) *min_element(v.begin(), v.end())
#define unq(v) v.resize(distance(v.begin(), unique(v.begin(), v.end())))

void solve() {
    
        int n;
        string s;
        cin >> n ;
        cin >> s;
        int mp[26];
        for(int i=0;i<26;i++){
            mp[i]=-1;
        }
        for(int i=0;i<n;i++){
            int curr = (s[i]-'a');
            if(mp[curr]==-1){
                mp[curr]=i%2;
            }else{
                if(mp[curr]!=i%2){
                    NO
                    return;
                }
            }
        }
        YES
}

int32_t main() {
    FasterIO;
    int t;cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    
    
}
