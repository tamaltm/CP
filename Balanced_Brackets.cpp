#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define int long long
    #define FOR(i,n) for(int i=0;i<n;i++)
    #define a_sort(v) sort(v.begin(),v.end())
    #define d_sort(v) sort(v.begin(),v.end(),greater<int>())
    #define YES cout << "YES" << endl;
    #define NO cout << "NO" << endl;
    #define vi vector<int>
    #define vl vector<long long>
    #define maximum(v) *max_element(v.begin(),v.end())
    #define minimum(v) *min_element(v.begin(),v.end())
    #define unq(v) v.resize(distance(v.begin(),unique(v.begin(),v.end())))
     
    void solve() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        stack<char> sk;
        bool valid = true; // To track if the string is valid

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                sk.push(s[i]);
            } else {
                if (sk.empty()) {
                    valid = false; // Closing bracket with no matching opening
                    break;
                }
                if ((s[i] == ')' && sk.top() == '(') ||
                    (s[i] == ']' && sk.top() == '[') ||
                    (s[i] == '}' && sk.top() == '{')) {
                    sk.pop();
                } else {
                    valid = false; // Mismatched bracket
                    break;
                }
            }
        }

        // If the stack is not empty, it means there are unmatched opening brackets
        if (valid && sk.empty()) {
            YES;
        } else {
            NO;
        }
    }
}

     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }