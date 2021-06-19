#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll t; cin>>t;
  int mod = 1e9+7;
  while(t--){
      ll a,b,res;
      cin>>a>>b;
      res = pow(a,b);
      res = res%mod;
      cout<<res<<"\n";
  }
  return 0;
}