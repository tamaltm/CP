#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define ll long long
    vector<int>v;
    vector<int> merge(vector<int>&a,vector<int>&b){
        vector<int>ans;
        int n=a.size(),m=b.size();
        int i=0,j=0;
        while (i<n && j<m)
        {
            /* code */
            if(a[i]<b[j]){
                ans.push_back(a[i++]);
            }else{
                ans.push_back(b[j++]);
            }
        }
        while (i<n)
        {
            /* code */
            ans.push_back(a[i++]);
        }
        while (j<m)
        {
            /* code */
            ans.push_back(b[j++]);
        }
        return ans;
        
        
    }
    vector<int> merge_sort(int l,int r){
        if(l==r) return {v[l]};
        int mid = (l+r)/2;
        vector<int> left = merge_sort(l,mid);
        vector<int>right = merge_sort(mid+1,r);
        return merge(left,right);
    }
    void solve(){
       
       int x;
       while (cin >> x)
       {
        /* code */
        v.push_back(x);
       }
       int n = v.size()-1;
       vector<int> ans = merge_sort(0,n);
       for(auto u:ans){
        cout << u << " ";
       }
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }