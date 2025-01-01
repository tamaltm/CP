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
    const int MAX = 1e5+9;
    void solve(){
       int n;
       cin >> n;
       deque<int>a,b;
       int k;
       cin >> k;
       while(k--){
        int x;cin >> x;
        a.push_back(x);
       }
       cin >> k;
       while (k--)
       {
        int x;cin >> x;
        b.push_back(x);
       }
       int fights=0,who_won=-1;
        while (fights<MAX)
        {   
            if(a.empty()){
                who_won=2;
                break;
            }
            if(b.empty()){
                who_won=1;
                break;
            }
            int a_top=a[0],b_top=b[0];
            a.pop_front();
            b.pop_front();
            if(a_top>b_top){
                a.push_back(b_top);
                a.push_back(a_top);
            }else{
                b.push_back(a_top);
                b.push_back(b_top);
            }
            fights++;
        }
        if(who_won==-1){
            cout << "-1" << '\n';
        }else{
            cout << fights << " " << who_won << '\n';
        }
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }