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
    const int N = 1e5+9;
    int a[N],n;
    int binary_solve(int x){
        int l = 0,r = n-1;
            int mid = (l+r)/2;int ans=0;
        while (l<=r)
        {
            /* code */

            mid = (l+r)/2;
            if(x>=a[mid]){
                ans = mid+1;
                l=mid+1;
            }else{
                r = mid-1;
            }
        } 
        return ans;
    }
    void solve(){
       cin >> n;
       FOR(i,n){
        cin >> a[i];
       }
       sort(a,a+n);
       int q;
       cin >> q;
       while (q--)
       {
        /* code */
        int l,r;
        cin >> l >> r;
        cout << binary_solve(r) - binary_solve(l-1) << " ";
        
       }
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }