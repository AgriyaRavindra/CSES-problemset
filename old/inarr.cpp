#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ll n;
   cin>>n;
   ll a[n];
   ll count=0;
       for(ll i=0;i<n;i++){ cin>>a[i];
       if(i>0){
           if(a[i]<a[i-1]) {count+=(a[i-1]-a[i]); a[i]=a[i-1];}
       }
   }
    cout<<count<<endl;
   
   return 0;
}