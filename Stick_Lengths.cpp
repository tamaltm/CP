#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define int long long
     
    void solve(){
       int n;
       cin >> n;
       int a[n];
       for(int i=0;i<n;i++){
        cin >> a[i];
       }
       sort(a,a+n);
       int ans=0,mid;
       mid = n/2;
       
       for(int i=0;i<n;i++){
        ans+=abs(a[mid]-a[i]);
       }
       cout << ans <<'\n';
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }