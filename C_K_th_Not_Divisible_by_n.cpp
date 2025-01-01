#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define int long long

    const int MAX = 2e9;
     int n,k;
    bool ok(int x){
        return (x-(x/n))>=k;
    }
    void solve(){
       int test_cases;
       cin >> test_cases;
       while (test_cases--)
       {
        cin >> n >> k;
        int l=1,r=MAX,ans=1;
        while (l<=r)
        {
            /* code */
            int mid = (l+r)/2;
            if(ok(mid)){
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        cout << ans << endl;
       }

       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }