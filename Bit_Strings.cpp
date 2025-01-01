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
    const int mod = 1e9+7;
    int power(int n){
        int sum=1;
        for(int i=1;i<=n;i++){
            sum*=(2%mod);
            sum%=mod;
        }
        return sum;
    }
    void solve(){
       int n;
       cin >> n;
        int ans = power(n);
        cout << ans  << '\n';
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }