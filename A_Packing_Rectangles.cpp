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
     const int max_ll = 1e14;
     int w,h,required_rectangles;
    bool ok(int l){
        int a = l / w;
        int b = l / h;
        if(b==0) return false;

        return a>=(double) required_rectangles/b;
    }
    void solve(){
       
       cin >> w >> h >> required_rectangles;
        int l=0,r=max_ll,ans;
        
        while (l<=r)
        {
            /* code */
        int mid = (l+r)/2;
        if(ok(mid)){
        ans = mid;
        r = mid-1;
            
        }else{
            l = mid+1;
        }
    }
    cout << ans << '\n';
}   
    
    int32_t main(){
        FasterIO;
        solve();
     
    }