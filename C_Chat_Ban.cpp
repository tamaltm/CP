#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define int long long
    int n,x;
    bool ok(int value){
        int sum=1LL*((value)*(value+1LL))/2;
        return sum>=x;
    }
    void solve(){
       int t;cin >> t;
       
       while (t--)
       {
        /* code */
        cin >> n >> x;
        int l=0,r=x,ans=0;
        if((n*n)<x){
            cout << 2*n-1 <<'\n';
            continue;
        }
        while (l<=r)
        {
            /* code */
            int mid = 1LL*l+(r-l)/2;
            if(ok(mid)){
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
    