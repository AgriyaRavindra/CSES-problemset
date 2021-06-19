#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Point {
    ll x,y;
    void read(){
        cin>>x>>y;
    }
    Point operator - (const Point& b) const {
        return Point{x - b.x, y - b.y};
    }
    Point operator -= (const Point& b) {
        x -= b.x;
        y -= b.y;
    }
    ll operator *(const Point& b) const {
        return x * b.y - y * b.x;
    }
};

void solve(){
    Point p1,p2,p3;
    p1.read();
    p2.read();
    p3.read();
    // p3 = p3 - p1;
    // p2 = p2 - p1;
    p3 -= p1;
    p2 -= p1;

    ll cross_product = p2.x * p3.y - p2.y * p3.x;
    if(cross_product < 0) {
        cout<<"RIGHT"<<"\n";
    }else if(cross_product > 0){
        cout<<"LEFT"<<"\n";
    }else{
        cout<<"TOUCH"<<"\n";
    }
}    

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}