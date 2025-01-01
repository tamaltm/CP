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
    bool cmp(pair<string,int> &a,pair<string,int> &b){
        return a.second>b.second;
    }
    void solve(){
       int t;
       cin >> t;
       while (t--)
       {
        /* code */
        int n;
        cin >> n;
        cin.ignore();
        vector<pair<int,string>> v(n);
        for(int i=0;i<n;i++){
            string s;int x;
            getline(cin,s);
            int len = s.size();
            string year = s.substr(len-4);
            x = stoi(year);
            string name = s.substr(0,len-5);
            v.push_back({x,name});
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<n;i++){
            cout << v[i].second  <<endl;
        }
       }
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }