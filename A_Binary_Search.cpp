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
    const int N=1e5+9;
    int a[N],n;
    bool binary_search(int element){
        int left=0,right=n-1;
        if(left>right) return false;
        while (left<=right)
        {
            /* code */
            int mid = (left+right)/2;
            if(element==a[mid]){return true;}
            else if(element<a[mid]) {right=mid-1;}
            else{left=mid+1;}
        }
        return false;
    } 
    void solve(){
       int k;
       cin >> n >> k;
       int q[k];
       for(int i=0;i<n;i++){
        cin >> a[i];
       }
       for(int i=0;i<k;i++){
        cin >> q[i];
       }
       int i=0;
        while (i<k)
        {   
            if(binary_search(q[i])){
                YES;
            }else{
                NO;
            }
            i++;
        }
        
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }