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
     
    void solve(){
       int t;
       cin >> t;
       while (t--)
       {
        int n;
       cin >> n;
       deque<int>dq;
       for(int i=0;i<n;i++){
        int x;cin >> x;
        dq.push_back(x);
       }
       int masha=0,bear=0;
       while (!dq.empty())
       {
        /* code */
        int take = 2;
        while (!dq.empty() && take--)
        {
            /* code */
            masha+=dq.front();
            dq.pop_front();
        }
        take = 2;
        while (!dq.empty() && take--)
        {
            bear+=dq.back();
            dq.pop_back();
        }
        
       }
       if(masha==bear){
        cout << "Draw" << '\n';
       }else{
        cout << ((masha>bear) ? "Masha":"The Bear") << '\n';
       }
       
       }
       
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }