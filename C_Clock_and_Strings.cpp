#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define ll long long
     
    void solve(){
       int t;cin >> t;
       while (t--)
       {
        /* code */
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int count_1=0,count_2=0;
        for(int i=a;;i=(i%12)+1){
            if(i==c || i==d){
                count_1++;
                break;
            }
            if(i==b){
                break;
            }
        }
        for (int i = a;; i = (i - 2 + 12) % 12 + 1) {
            if (i == c || i == d) {
                count_2++;
                break;
            }
            if (i == b) {
                break;
        }
}

        if(count_1==1 && count_2==1){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }
       }
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }