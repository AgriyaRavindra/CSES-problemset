#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,x,sum = 0,ts = 0;
	cin>>n;
	x = n - 1;
	ts = (n * (n + 1))/2;
	while(x--){
		long long l;
		cin>>l;
		sum +=l;
	}
	cout<<ts - sum;
	return 0;
}