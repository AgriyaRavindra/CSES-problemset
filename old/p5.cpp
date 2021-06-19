#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n,q;
  cin>>n>>q;
  vector<ll> v;
  while(n--){
    ll x; cin>>x;
    v.push_back(x);
  }
 while(q--){
  ll a,b,m = v[0];
  cin>>a>>b;
  for (ll it = a; it != b; it++) 
       m = min(m , v[it]); 
       
  cout<<m<<"\n";
 }      
 
  return 0;
}