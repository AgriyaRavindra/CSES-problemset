#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n,x,q,sum = 0;
  cin>>n>>q;
  vector<ll> v(n);

  for(ll i = 0; i < n ;i++){
    cin>>x;
    sum = sum + x;
    v[i] = sum;
  }
  for(ll i = 0; i < q ;i++){
    ll l,r;
    cin>>l>>r;
    cout<<v[r] - v[l]<<"\n";
  }
  
  
  return 0;
}