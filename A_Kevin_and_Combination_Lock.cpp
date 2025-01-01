#include <bits/stdc++.h>
    using namespace std;
    #define FasterIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define int long long
     int x;
     bool has_two_consecutive_3s(int n){
        string s=to_string(n);int count=0;
        for(int i=0;i<s.size();i++){
            int count=0;
            if(i<s.size()-1 && s[i]=='3' && s[i+1]=='3'){
                return true;
            }
        }
        return false;
     }
     int removeConsecutiveThrees(int num) {
    string numStr = to_string(num); 
    string result;

    for (size_t i = 0; i < numStr.size(); i++) {
        
        if (i < numStr.size() - 1 && numStr[i] == '3' && numStr[i + 1] == '3') {
            i++; 
        } else {
            result += numStr[i]; 
        }
    }
    
    return result.empty()? 0:stoll(result);
}
    void solve(){
       int t;cin >> t;
       while (t--)
       {
        /* code */
        cin >> x;
        while (x>=33)
        {
            /* code */
            
                if(has_two_consecutive_3s(x)){
                    x=removeConsecutiveThrees(x);
                }else{
                    x-=33;
                }
        }
        cout << (x==0 ? "YES":"NO") << '\n';
       }
       
    }
     
    
    int32_t main(){
        FasterIO;
        solve();
     
    }