#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
   ll n;
   int flag =0;
   cin>>n;
   vector<int> a,b;
 
   ll sum = (n*(n + 1))/2;
   if(sum%2 != 0){
     cout<<"NO"<<"\n";
     return 0;
   }else{
     flag = 1;
      if(n%4 == 0){
        ll x = n/4;
        for(ll i=0; i<x; i++){
          a.push_back(i + 1);
          a.push_back(n - i);
        }
        for(ll i=(x+1); i<=(n-x); i++){
          b.push_back(i);
        }
      }else if(n%4 == 3){
        a.push_back(1);
        a.push_back(2);
        b.push_back(3);
        ll y = (n - 3)/4;
        for(ll i=0; i<y; i++){
          a.push_back(i + 4);
          a.push_back(n - i);
        }
        for(ll i=(y + 4); i<(n-y + 1); i++){
          b.push_back(i);
        }
 
      }
   }
   sort(a.rbegin(),a.rend());
   sort(b.rbegin(),b.rend());
  if(flag == 1){
     cout<<"YES"<<"\n";
     cout<<a.size()<<"\n";
     for(auto g: a){
       cout<<g<<" ";
     }
     cout<<"\n";
     cout<<b.size()<<"\n";
     for(auto g: b){
       cout<<g<<" ";
     }
     cout<<"\n";
   }
}