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
       int n;
       cin >> n;
       if(n==1){
        cout << '1' << '\n';
        return;
       }
       if(n==2 || n==3){
        cout << "NO SOLUTION" << '\n';
        return;
       }
       int last_odd,rejected_even;
        for(int i=n;i>=1;i--){
        if(i%2){
            cout << i << ' ';
            last_odd=i;
        }
       }
       for(int i=n;i>=1;i--){
        if(i%2==0 && abs(last_odd-i)==1){
            rejected_even=i;
        }else if(i%2==0){
            cout << i << ' ';
        }
       }
       cout << rejected_even << ' ';
        
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }