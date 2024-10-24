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
        cin >> n;
        int turn=0;
        int i=1;
        string winner;
        while (turn<=n && turn>=n*(-1))
        {
            /* code */
            
            if(i%2){
                winner="Sakurako";
                turn+=-1*(2*(i)-1);
            }else{
                winner="Kosuke";
                turn+=2*(i)-1;
            }
            
           // cout << turn << ' ';
            i++;

        }
            cout << winner << '\n'; 
       }
       
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }