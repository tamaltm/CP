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
     // complexity logn
    void solve(){
       int a[] = {10,24,54,334,2334,2556};
       int left = 0,right=5;
       int element ;cin >> element;
       while (left<right)
       {
        /* code */
        int mid = (left+right)/2;
        if(element==a[mid]){
            cout << "found at " << mid << endl; 
            break;
        }
        else if(element<a[mid]){
            right=mid-1;
        }else{
            left=mid+1;
        }

       }
       cout << "Not found" << endl;
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }