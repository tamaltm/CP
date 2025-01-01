#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define int long long
    #define FOR(i,n) for(int i=0;i<n;i++)
    #define a_sort(v) sort(v.begin(),v.end())
    #define d_sort(v) sort(v.begin(),v.end(),greater<int>())
    #define YES cout << "YES" << endl;
    #define NO cout << "NO" << endl;
    #define vi vector<int>
    #define vl vector<long long>
    #define maximum(v) *max_element(v.begin(),v.end())
    #define minimum(v) *min_element(v.begin(),v.end())
    #define unq(v) v.resize(distance(v.begin(),unique(v.begin(),v.end())))
    vector<string>path;

    void update_path(string file){
        if(file.size()>0){
            if(file==".."){
                if(path.size()>0){
                    path.pop_back();
                }
            }else{
                path.push_back(file);
            }
        }
    }
    void solve(){
       int t;
       cin >> t;
       while (t--)
       {
            string cmd;
            cin >> cmd;
            if(cmd=="pwd"){
                for(auto u:path){
                     cout << "/" << u;
                }cout << "/" << '\n'; 
            }else{
                string s;cin >> s;
                if(s[0]=='/'){
                    path.clear();
                }
                string file="";
                for(int i=0;i<s.size();i++){
                    if(s[i]=='/'){
                        update_path(file);
                        file="";
                    }else{
                        file+=s[i];
                    }
                }
                update_path(file);
            }
            
       }
       
       }
       
    
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }