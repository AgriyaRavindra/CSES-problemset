#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==1) cout<<1;
    else
    if(n==3 || n==2) {cout<<"NO SOLUTION\n";}
    else{
    int mid=n/2;
    mid++;
    int i=1,j=mid;
    while(j<=n && i<mid){
        cout<<j<<" "<<i<<" ";
        j++;i++;
    }
    if(n&1){
        cout<<j;
    }
}

    return 0;
}