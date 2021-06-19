#include <bits/stdc++.h>
using namespace std;
     
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     string s;
//     cin>>s;
//     int n = s.size();
//     int cnt = 0,best = 0;
//     for(int i=0; i<n; i++){
//         if(s[i] != s[i+1]){
//             best = max(cnt,best);
//             cnt = 0;
//         }else if(s[i] == s[i+1]){
//             cnt++;
//         }
//     }
//     cout<<best+1;
//     cout<<"\n";
//     return 0;
// }

int main(){
    string s;
    cin>>s;
    int n=s.size();
    int cnt=1,mx=0;
    for(int i=1; i<=n; i++){
        if(s[i] == s[i-1]){
            cnt++;
        }else if(s[i] != s[i-1]){
            cnt = 1;
        }
        mx = max(mx,cnt);
    }
    cout<<mx<<"\n";
}