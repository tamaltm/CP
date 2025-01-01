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
       while (t--)
       {
        /* code */
        int n;
        string s;stack<int>st;queue<int>q;
        cin >> n >> s;
        for(int i=0;i<n;i++){
            string command;int val;
            cin >> command;
            if(command=="IN"){
                cin >> val;
            }
           if(s=="FIFO"){
            if(command=="IN")q.push(val);
            else if(command=="OUT" && !q.empty()){cout << q.front() << '\n';q.pop();}else{cout << "None" << '\n';}
           }
           if(s=="FILO"){
            if(command=="IN")st.push(val);
            else if(command=="OUT" && !st.empty()){cout << st.top() << '\n';st.pop();}else{cout << "None" << '\n';}
           }
        }
       }
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }