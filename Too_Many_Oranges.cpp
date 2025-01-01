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
       int test_cases;
       cin >> test_cases;
       while (test_cases--)
       {
        /* code */
        int n,k;
        cin >> n >> k;
        int count=0;
        if(k<10){
            NO
            continue;
        }
        while(k!=0){
            if(k%n==0 ||k%n==1||k%n==2){
            count+=k/n;
            k/=10;
        }
        }
            cout << count ;
            if(count==n){
                YES
            }else{
                NO
            }
            
        
       
       
    }
    }
    
    int32_t main(){
        FasterIO;
        solve();
     
    }