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
    
    
    bool is_perfect(int n){
        int sum_of_digits=0;
        while (n>0)
        {
            /* code */
            sum_of_digits+=n%10;
            n/=10;
        }
        return sum_of_digits==10;
        
    }  
    void solve(){
       int k;cin >> k;
       int count=0;
       for(int i=1;i<=2e7;i++){
        if(is_perfect(i)){
            count++;
            if(count==k){
                cout << i << endl;
                return;
            }
        }
       }
      // cout << v[k-1] << endl;
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }