#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define ll long long
     
    void solve(){
       int t;
       cin >> t;
       while (t--)
       {
        /* code */
        int n;cin >> n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        int a_sum=0,b_sum=0;
        for(int i=1;i<n;i++){
            if(b[i]<a[i-1]){
                a_sum+=a[i-1];
                b_sum+=b[i];
            }
        }
        a_sum+=a[n-1];
        cout << abs(a_sum-b_sum)<< endl;
       }
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }