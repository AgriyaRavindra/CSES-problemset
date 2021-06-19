#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,W;
    cin>>n>>W;
    ll dp[n+1][W+1];
    memset(dp,0,sizeof(dp));
    vector<ll> v(n);
    for(ll& x : v) cin>>x;
    for(ll i=0; i<=n ;i++){
        for(ll j=0; j<=W; j++){
            if(v[i-1] <= j){
                dp[i][j] = dp[i-1][W-v[i-1]] + dp[i-1][W];
            }else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout<<dp[n][W]<<"\n";
    return 0;
}