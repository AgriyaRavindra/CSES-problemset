#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int64_t countDivisors(ll n) { 
    ll cnt = 0; 
    int s = sqrt(n);
    for (int i = 1; i <= s; i++) { 
        if (n % i == 0) { 
            if (n / i == i) 
                cnt++; 
            else 
                cnt += 2; 
        } 
    } 
    return cnt; 
} 

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    cout<<countDivisors(n)<<"\n";
    
  }
  return 0;
}