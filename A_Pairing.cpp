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
       int a[4];
       for(int i=0;i<4;i++){
        cin >> a[i];
       }
       sort(a,a+4);
       int sum=0;
       //vector<bool> o(5,0);
       for(int i=1;i<4;i++){
        if(a[i]==a[i-1]){
            sum++;
            i=3;
        }
       }
        
    cout << sum;
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }