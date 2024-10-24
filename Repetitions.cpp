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
       string s;
       cin >> s;
       int count=1;
       int n = s.size();
       int m=INT_MIN;
       for(int i=0;i<n;i++){
            if(i+1<n && s[i]==s[i+1]){
                count++;
            }else{
                m=max(m,count);
                count=1;
            }
       }
       cout << m << endl;
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }