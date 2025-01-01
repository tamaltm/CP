#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define int  long long
    const int N = 2e5;
    int a[N],prefix_sum[N];
    void solve(){
       int t;cin >> t;
       
       while (t--)
       {
        /* code */
        int n;
        cin >> n;
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        int sum=0,ans=0;
        int mx=0;
        for(int i=1;i<=n;i++){
            sum+=a[i];
            mx = max(mx,a[i]);
            if(sum-mx==mx){
                ans++;
            }
        }
       cout << ans <<'\n';
    }
     
    } 
    int32_t main(){
        FasterIO;
        solve();
     
    }