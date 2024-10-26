#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define int long long
    #define FOR(i,n) for(int i=0;i<n;i++)
    #define a_sort(v) sort(v.begin(),v.end())
    #define d_sort(v) sort(v.begin(),v.end(),greater<int>())
    #define YES cout << "YES" << endl;
    #define NO cout << "NO" << endl;
    #define SUM(v) accumulate(v.begin(), v.end(), 0)
    #define vi vector<int>
    #define vl vector<long long>
    #define maximum(v) *max_element(v.begin(),v.end())
    #define minimum(v) *min_element(v.begin(),v.end())
    #define unq(v) v.resize(distance(v.begin(),unique(v.begin(),v.end())))
     
    void solve(){
       vector<string> s;
       for(int i=0;i<8;i++){
        string s1;
        cin >> s1;
        s.push_back(s1);
       // cin >> s[i];
       }
       int free_rows=0;
       FOR(i,8){
        if(count(s[i].begin(),s[i].end(),'#')==0){
            free_rows++;
        }
       }
       vi occupied_columns(8,0);
       FOR(i,8){
        FOR(j,8){
            if(s[i][j]=='#'){
                occupied_columns[j]=1;
            }
        }
       }
        cout << free_rows*count(occupied_columns.begin(),occupied_columns.end(),0) << endl;
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }
    