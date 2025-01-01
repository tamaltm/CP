#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define ll long long
    const int N = 2e5+9;
    int n,k;
    ll a[N];
    bool ok(ll x){
        ll sum=a[0],sub_count=1;
        for(int i=0;i<n;i++){
            if(a[i]>x)return false;
        }
        for(int i=1;i<n;i++){
            if(sum+a[i]<=x){
                sum+=a[i];
            }else{
                sub_count++;
                sum=a[i];
            }
        }
        return sub_count<=k;
    }
    void solve(){
       cin >> n >> k;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        ll l=0,r=2e14,ans=0;
        while (l<=r)
        {
            /* code */
            ll mid = (l+r)/2;
            if(ok(mid)){
                ans = mid;
                r = mid -1;
            }else{
                l = mid +1;
            }
        }
        cout << ans << endl;
        
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }