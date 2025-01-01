#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define int long long
    #define FOR(i,n) for(int i=0;i<n;i++)
    #define a_sort(v) sort(v.begin(),v.end())
    #define d_sort(v) sort(v.begin(),v.end(),greater<int>())
    #define YES cout << "Yes" << endl;
    #define NO cout << "No" << endl;
    #define vi vector<int>
    #define vl vector<long long>
    #define maximum(v) *max_element(v.begin(),v.end())
    #define minimum(v) *min_element(v.begin(),v.end())
    #define unq(v) v.resize(distance(v.begin(),unique(v.begin(),v.end())))
     
    void solve(){
       int n;
       cin >> n;
       deque<int>q;
       FOR(i,n){
        int x;cin >>x;
        if(x==1){
            int k;cin >> k;
            q.push_back(k);
        }
        if(x==2){
            int k;cin >> k;
            int t=q.front();
            if(t!=k)NO
            else YES
            q.pop_front();
        }
       }
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }