#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Point {
    ll x,y;
    void read(){
        cin>>x>>y;
    }
    Point operator - (const Point& b) {
        return Point{ x - b.x, y - b.y};
    }
    Point operator -= (const Point& b) {
        x -= b.x;
        y -= b.y;
    }
    ll operator * (const Point& b) const{
        return (ll)x * b.y - (ll)y * b.x;
    } 
    ll triangle(const Point& b, const Point& c) const {
    	return (b - *this) * (c - *this);
    }
};

void solve(){
    Point p1,p2,p3,p4;
    p1.read();
    p2.read();
    p3.read();
    p4.read();
    if((p2 - p1) * (p4 - p3) == 0) {
    	//two segment are parallel
    	// if((p2 - p1) * (p4 - p3) != 0)
    	if(p1.triangle(p2 , p3) != 0){
    		cout<<"NO \n";  
    		return ;  	
    	}
    	for(int rep = 0; rep < 2; rep++){
    		// rectangle A is on left of rect B  or A below rect B
    		if(max(p1.x,p2.x) < min(p3.x , p4.x) || max(p1.y,p2.y) < min(p3.y , p4.y)){
    			cout<<"NO \n";
    			return ;
    		}
    		swap(p1, p3);
    		swap(p2, p4);
    	}
    	cout<<"YES \n";
    	return ;
    }
    for(int i=0; i<2; i++){
    	ll sign1 = (p2 - p1) * (p3 - p1);
    	ll sign2 = (p2 - p1) * (p4 - p1);
    	if((sign1 < 0 && sign2 < 0) || (sign1 > 0 && sign2 > 0)){
    		// segmnt B is on left or right from line A
    		cout<<"NO \n";
    		return ;
    	}
    	swap(p1, p3);
    	swap(p2, p4);
    }
    cout<<"YES\n";
    return ;

    
} 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll tt;
    cin>>tt;
    while(tt--){
        solve();
    } 
    return 0;
}