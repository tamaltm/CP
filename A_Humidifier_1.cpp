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
       int test_cases;cin >> test_cases;
       int water=0,max_time=INT_MIN;
       int t=0,v=0;
       int t1=0,v1=0;
       bool first=false;
       while (test_cases--)
       {
        /* code */
        cin >> t >> v;
        if(first){
            if(water-(t-t1)>=0)
            water-=t-t1;
            else
            water=0;
        }
        t1=t,v1=v;
        water+=v;
        first=true;
       }
      cout << water << endl;
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }