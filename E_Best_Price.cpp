#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define ll long long
    const int N = 1e5,MAX=1e7;
    int n,k,a[N],b[N];
    bool ok(int price){
       int neg=0;
       for(int i=0;i<n;i++){
        if(price%a[i]==0)
        neg+=price/a[i];
        break;
       }
       return neg<=k;
    }
    void solve(){
       int t;cin >> t;
       while (t--)
       {
        cin >> n >> k;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        sort(b,b+n,[](int a,int b){
            return a>b;
        });
       
        int l=1,r=MAX,ans=0;
        while (l<=r)
        {
            /* code */
            int mid = (l+r)/2;
            if(ok(mid)){
                ans=mid;
                l=mid+1;
            }else{
                r = mid - 1;
            }
        }
        cout << ans << '\n';
       }
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }