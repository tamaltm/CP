#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define ll long long
    #define unq(v) v.resize(distance(v.begin(),unique(v.begin(),v.end())))
     
    void solve(){
       int t;cin >> t;
       while (t--)
       {
        /* code */
        string s;cin >>s ;
        int n=s.size();
        int ans=1;
        bool ok=false;
        vector<int>ass;
        for(int i=0;i<n-1;i++){
            ans+=(s[i]!=s[i+1]);
            ok |= (s[i]=='0' && s[i+1]=='1');
        }
        cout << ans-ok <<'\n';
       
    }
    }    
    
    int32_t main(){
        FasterIO;
        solve();
     
    }