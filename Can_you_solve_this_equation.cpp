#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define ll long long
    double y;
    bool ok(double x){
        double a = 8*pow(x,4);
        double b = 7*pow(x,3);
        double c = 2*pow(x,2);
        return a+b+c+3*x + 6>=y;
    }
    void solve(){
       int t;cin >> t;
       while (t--)
       {
        /* code */
        cin >> y;
        if (y < 6) {
            cout << "No solution!" << '\n';
            continue;
        }
        double l=0,r=100,ans=-1;int iterations=100;
        while (iterations--)
        {
            /* code */
            double mid=(l+r)/2;
            if(ok(mid)){
                ans = mid;
                r=mid;
            }else{
                l=mid;
            }
        }
         if (ans>0.0 && ans <=100.0) {
            cout << fixed << setprecision(4) << ans << '\n';
        } else {
            cout << "No solution!" << '\n';
    }
        
       }
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }