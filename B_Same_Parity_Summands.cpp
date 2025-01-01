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
       int t;cin >> t;
       while (t--)
       {
        /* code */
        int n,k;cin >> n >>k;
        int n1=n-(k-1);
        if(n1>0 && n1%2==1){
            YES
            for(int i=0;i<k-1;i++){
                cout << "1 ";
            }
            cout << n1 << '\n';
            continue;
        }
        int n2 = n - 2*(k-1);
        if(n2>0 && n2%2==0){
            YES
            for(int i=0;i<k-1;i++){
                cout << "2 ";
            }
            cout << n2 << '\n';
            continue;
        }
        NO
       }
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }