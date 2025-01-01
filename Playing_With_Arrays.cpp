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
        /* code */
        int n;cin >> n;
        deque<int> r,a;
        for(int i=0;i<n;i++){
            r.push_back(i+1);
        }
        for(int i=n-1;i>0;i--)
        {
            /* code */
            a.push_back(r.front());
            r.pop_front();
             if (!r.empty()) {
                a.push_back(r.back());
                r.pop_back();
            }
        }
    //    cout << a.size() << endl;
        for(int i=0;i<n;i++){
            cout << a[i];
            if(i!=n-1)cout << " ";
        }cout << endl;
       }
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }