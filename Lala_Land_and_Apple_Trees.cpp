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
    int total_apples(deque<pair<int,int>> left,deque<pair<int,int>> right){
        int total_apples=0;
        while (1)
        {
            if(left.empty())break;
            total_apples+=left[0].second;
            left.pop_front();
            if(right.empty())break;
            total_apples+=right[0].second;
            right.pop_front();
            
        }
        return total_apples;
        

    }
    void solve(){
       
        int n;cin >> n;
        deque<pair<int,int>> left,right;
        for(int i=0;i<n;i++){
            int position,apples;
            cin >> position>>apples;
            if(position<0)left.push_back({-position,apples});
            else right.push_back({position,apples});
        }   
            a_sort(left);
            a_sort(right);
            int total_apple = total_apples(left,right);
            total_apple = max(total_apple,total_apples(right,left));
        cout << total_apple << endl;
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }