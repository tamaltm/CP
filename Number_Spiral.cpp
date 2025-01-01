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
        int x,y;
        cin >> y >> x;
        if(y>x){
            int ans = (y-1)*(y-1);
            int add = 0;

            if(y%2!=0){
                add=x;
            }else{
                add=2*y-x;
            }
            cout << add+ans << '\n';
        }
        else{
            int ans = (x-1)*(x-1);
            int add = 0;

            if(x%2==0){
                add=y;
            }else{
                add=2*x-y;
            }
            cout << add + ans << '\n';
        }
       }
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }