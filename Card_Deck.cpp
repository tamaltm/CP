#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define int long long
    #define FOR(i,s,n) for(int i=s;i<n;i++)
    #define a_sort(v) sort(v.begin(),v.end())
    #define d_sort(v) sort(v.begin(),v.end(),greater<int>())
    #define YES cout << "YES" << endl;
    #define NO cout << "NO" << endl;
    #define vi vector<int>
    #define vl vector<long long>
    #define maximum(v) *max_element(v.begin(),v.end())
    #define minimum(v) *min_element(v.begin(),v.end())
    #define unq(v) v.resize(distance(v.begin(),unique(v.begin(),v.end())))
    
    const int N=1e5+5;

    void solve(){
       int test_cases;
       cin >> test_cases;
       while (test_cases--)
       {
        /* code */
        int n;
        cin >> n;
        vi a(n),inx(N);

        FOR(i,0,n){
            cin >> a[i];
            inx[a[i]]=i;
        }
        int l=n;
        int curr = n;
        while (curr > 0)
        {
            /* code */
            bool flag = false;
            FOR(i,inx[curr],l){
                cout << a[i] << " ";
                flag = true;
            }
            if(flag) l = inx[curr];
            curr--;
        }
        cout << endl;
        
       }
       
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }