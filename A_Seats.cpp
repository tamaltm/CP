#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,count=0;
  cin >> n;
  string s;
  cin >> s;
  for(int i=0;i<n-2;i++){
    if(s[i]=='#' && s[i+1]=='.' &&  s[i+2]=='#'){
      count++;
      
    }
  }
  cout << count << '\n';
}