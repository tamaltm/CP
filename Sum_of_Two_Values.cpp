#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define ll long long
     
    void solve(){
       int n,x;
       cin >> n >> x;
       int a[n];
       map<int,int>mp;
       for(int i=0;i<n;i++){
        cin >> a[i];
        
       }
       for(int i=0;i<n;i++){
        if( mp.find(x-a[i])!=mp.end()){
            cout << i+1 << " " <<  mp[x-a[i]] << '\n';
            return ;
        }
        mp[a[i]]=i+1;
       }
       cout << "IMPOSSIBLE" << '\n';

    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }