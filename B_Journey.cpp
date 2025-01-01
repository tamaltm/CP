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
        ll n;
        int a,b,c;
        cin >> n >> a >> b >> c;
        ll sum = a+b+c;
        int count=0;
        
            if(n/sum>0){
                count+=(n/sum)*3;
            }
            
           // cout << "count: " << count << endl;
            int k = n%sum;
           // cout << "k " << k << endl;
            while (k>0)
            {
                /* code */
                if(k>0){
                    k-=a;
                    count++;
                }if(k>0){
                    k-=b;
                    count++;
                }if(k>0){
                    k-=c;
                    count++;
                }
            }
            cout << count << endl;
        }
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }