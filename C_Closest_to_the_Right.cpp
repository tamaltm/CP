#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define int long long
    #define FOR(i,n) for(int i=1;i<=n;i++)
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
       int n,k;
       cin >> n >> k;
       int a[n+1];
       FOR(i,n){
        cin >> a[i];
       }
       while (k--)
       {
        /* code */
        int x; cin >> x;
        int l=1,r=n,ans=n+1;
        int mid;
        while (l<=r)
        {
            /* code */
            mid = (l+r)/2;
            if(a[mid]>=x){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        cout << ans << '\n';
       }
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }