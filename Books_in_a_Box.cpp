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
     
    void solve(){
       int t;
       cin >> t;
       int x;
        stack<int>books;
       while (t--)
       {
        /* code */
        
        cin >> x;
       // cout << x << endl;
        
        
        if(x==1){
            int k;cin >> k;
           
            //cout << k << endl;
            books.push(k);
           // cout << books.top() << endl;
        }
        if(x==2){
            if(!books.empty())books.pop();
            
        }if(x==3){
           if(!books.empty()) cout << books.top() << '\n';
        }
       
        
       }
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }