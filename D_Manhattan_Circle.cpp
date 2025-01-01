#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define ll long long
    int first_hash(string s){
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                return i;
            }
        }
        return 0;
    } 
    void solve(){
       int t;cin >> t;
       while (t--)
       {
        /* code */
        int n,m;cin >> n >> m;
        int max_i_index=-1;
        int max_size=0;
        vector<string>v(n+1);
        for(int i=1;i<=n;i++){
            cin >> v[i];
            int hash_count=count(v[i].begin(),v[i].end(),'#');
            if(max_size<hash_count){
                max_size=hash_count;
                max_i_index=i;
            }
        }
        int manhattan=(max_size+1)/2;

        cout << max_i_index << " " << first_hash(v[max_i_index])+manhattan << '\n';
       }
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }