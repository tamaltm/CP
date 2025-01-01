#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define ll long long
    const int N = 2e5+9;
    int a[N],prefix_sum[N];
    void solve(){
       int t;cin >> t;
       while (t--)
       {
        /* code */
        int n,q;
        cin >> n >> q;
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        for(int i=1;i<=n;i++){
            prefix_sum[i]=a[i]+prefix_sum[i-1];
        }
        while (q--)
        {
            /* code */
            int l,r,k;
            cin >> l >> r >> k;
            int remove_sum=prefix_sum[r]-prefix_sum[l-1];
            int total_sum=prefix_sum[n];
            total_sum-=remove_sum;
            int total_k=k*(r-l+1);
            total_sum+=total_k;
            if(total_sum%2){
                cout << "YES" << '\n';
            }else{
                cout << "NO" << '\n';
            }
        }
        

       }
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }