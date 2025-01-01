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
        int n;
        cin >> n;
        vi v(n);
        for(auto &i:v){
            cin >> i;
        }
        map<int,int> fr;
        
        for(int i=0;i<n;i++){
            fr[v[i]]++;
        }

        priority_queue<pair<int,int>> pq;

        for(auto [val, cnt] : fr){
            pq.push(make_pair(cnt,val));
        }
        int alive=n;
        while(pq.size()>1){
            auto[cnt1,val1] = pq.top();
            //cout << cnt << " " << val << endl;
            pq.pop();
            auto[cnt2,val2] = pq.top();
            pq.pop();
            cnt1--;
            cnt2--;
            alive-=2;
            if(cnt1>0)pq.push(make_pair(cnt1,val1));
            if(cnt2>0)pq.push(make_pair(cnt2,val2));
        }
       cout << alive << '\n';
    }
    } 
    
    int32_t main(){
        FasterIO;
        solve();
     
    }