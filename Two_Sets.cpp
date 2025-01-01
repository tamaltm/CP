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
       int n;
       cin >> n;
       int sum=(n*(n+1))/2;
       int half_sum=sum/2;
       int s=0;
        vector<bool> is_taken(n+1,0);
       stack <int> set1;
       if(sum%2){
        cout << "NO" << '\n';
       }else{
        cout << "YES" << '\n';
        int k=n;
        while(s+k<=half_sum){
            is_taken[k]=true;
            s+=k;
            if(k!=0){
                set1.push(k);
            }
            
            k--;
        }
        
        if(!is_taken[half_sum-s]){
            is_taken[half_sum-s]=true;
        if(half_sum-s!=0){
            set1.push(half_sum-s);
        }
            
            s+=half_sum-s;
        }
        cout << set1.size() << '\n';
        while(!set1.empty()){
            int k=set1.top();
            if(k!=0)
            cout <<k << ' ';
            set1.pop();
        }cout << '\n';
        int count=0;
        for(int i=1;i<=n;i++){
            if(!is_taken[i]){
                count++;
            }
        }
        cout << count << endl;
        for(int i=1;i<=n;i++){
            if(!is_taken[i]){
                cout << i << ' ';
            }
        }cout << '\n';
       }
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }