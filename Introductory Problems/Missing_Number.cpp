#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n; cin>>n;
    vector<int> v(n-1);
    for(auto &x : v) cin>> x;
    ll sum = 0;
    for(auto x: v){
        sum += x;
    }
    n = (n*(n+1))/2;
    cout<<n-sum<<"\n";
    return 0;
}