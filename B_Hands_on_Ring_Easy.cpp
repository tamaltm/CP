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
       int n,q;
       cin >> n >> q;
       while (q--)
       {
        char move;int t;
        cin >> move >> t;
        int taken,L_position=1,R_position=2;
        int total=0;
        switch (move)
        {
        case 'L':
            int ll_move=L_position+abs(n-t);
            int lr_move=t-L_position;
           // L_position+=min(abs(t-L_position),L_position+abs(n-t));
           if(n/2<R_position ){
            if(n-R_position)
            total+=lr_move;
           }else{
            total+=ll_move;
           }
            L_position=t;
            cout << total << endl;
            break;
        case 'R':
           int rl_move=R_position+abs(n-t);
            int rr_move=t-R_position;
           // L_position+=min(abs(t-L_position),L_position+abs(n-t));
           if(n/2<L_position ){
            total+=rr_move;
           }else{
            total+=ll_move;
           }
            break;
        default:
            break;
        }
       }
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }