#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define ll long long
    
    void solve(){
       int t;cin >> t;

       while (t--)
       {
        int n,m,k;
        cin >> n >> m >> k;
        map<int,int>mp;
        vector<int>a(m);
        for(auto &i:a){
            cin >> i;
        }
        for(int i=0;i<k;i++){
            int x;cin >> x;
            mp[x]++;
        }
            if(n==k){
                for(int i=0;i<m;i++){
                    cout << '1';
                }
                cout << '\n';
            }else if(n==k+1){
                for(int i=0;i<m;i++){
                    if(mp[a[i]]){
                    cout << '0';
                }else{
                    cout << '1';
                }
                }
                cout << '\n';                
            }else{
                for(int i=0;i<m;i++){
                    cout << '0';
                }cout << '\n';
            }
            
        }
       }
       
    
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }