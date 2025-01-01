#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define int long long
     
    void solve(){
       int x,n;cin >> x >> n;
       int a[n];
       for(int i=0;i<n;i++){
        cin >> a[i];
       }
       priority_queue<int,vector<int>,greater<int>>q;
       for(int i=0;i<n;i++){
        q.push(a[i]);
       }
       int ans = 0;
       while (q.size()>1)
       {
        /* code */
        int x = q.top();q.pop();
        int y = q.top();q.pop();
        ans+=(x+y);
        q.push(x+y);
       }
       cout << ans << '\n';
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }