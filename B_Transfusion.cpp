#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define int long long
    #define FOR(i,n) for(int i=0;i<n;i++)
    #define a_sort(v) sort(v.begin(),v.end())
    #define d_sort(v) sort(v.begin(),v.end(),greater<int>())
    #define YES cout << "YES" << '\n' ;
    #define NO cout << "NO" << '\n';
    #define vi vector<int>
    #define vl vector<long long>
    #define maximum(v) *max_element(v.begin(),v.end())
    #define minimum(v) *min_element(v.begin(),v.end())
    #define unq(v) v.resize(distance(v.begin(),unique(v.begin(),v.end())))
     
    void solve(){
       int n;cin >> n;
       vi v(n);
       for(auto &i:v) cin >> i;

       int ods=0,evs=0;
       for(int i=0;i<n;i++){
        if(i & 1) ods+=v[i];
        else evs+=v[i];
       }
       int odc=n/2,evc = n/2;
       if(n&1)evc++;

       if(ods%odc!=0||evs%evc!=0||ods/odc!=evs/evc){
        NO
        return;
       }
       YES
    }
     
    
    int32_t main(){
        FasterIO;
        int t;
        cin >> t;
        while (t--)
        {
            /* code */
            solve();
        }
        
        
     
    }