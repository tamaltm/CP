#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define int long long
    const int N = 2e5+9;
    int a[N];
    int n,k;
    bool ok(int x){
        int min_operations=0;
        for(int i=n/2;i<n;i++){
            if(a[i]<x){
                min_operations+=x-a[i];
            }
        }
        return min_operations<=k;
    }
    void solve(){
       cin >> n >> k;
       for(int i=0;i<n;i++){
        cin >> a[i];
       }
       sort(a,a+n);
       int l=0,r=2e9,ans=0;
       while (l<=r)
       {
        /* code */
        int mid=(l+r)/2;
        if(ok(mid)){
            ans = mid;
            l = mid+1;
        }else{
            r = mid -1;
        }
       }
       cout << ans << '\n';
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }