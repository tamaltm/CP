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
       string s;
       cin >> s;
       int n=s.size(),half_size=n/2;
       if(n%2)half_size=n/2+1;
       map<char,int> is_taken;
       for(auto c:s){
        is_taken[c];
       }
       for(auto c:s){
        is_taken[c]++;
       }
       string first_half,second_half;
       for(auto &i:is_taken){
        cout << i.first << " " << i.second << endl;
       }
    //  cout << half_size;
       for(int i=0;i<half_size;i++){
        if(s[i]==s[n-i-1]){
            first_half+=s[i];
            second_half+=s[n-i-1];
            // cout << first_half << endl << second_half << endl;
            // cout << i << endl;
        }else{
            if(is_taken[s[i]]!=1){
                
            }
        }
       }
       
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }