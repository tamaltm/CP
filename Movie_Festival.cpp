#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define ll long long
     
    void solve(){
       int n;cin >> n;
       vector<pair<int,int>> v;
       for(int i=0;i<n;i++){
        int x,y;cin >> x >> y;
        v.push_back(make_pair(x,y));
       }
       sort(v.begin(),v.end(),[](pair<int,int>&a,pair<int,int>&b){
            return a.second<b.second;
       });
        int last_end = -1,count=0;
       for(auto[x,y]:v){
        if(x>=last_end){
            last_end=y;
            count++;
        }
       }
       cout << count << '\n';
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }