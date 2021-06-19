#include<bits/stdc++.h>
using namespace std;
 
int main(){
	long long  n,f = 0;
	cin>>n;
 
	while(n>1){
		if(n%2 == 0){
			cout<<n<<" ";
			n = n/2;
		}else{
			
			cout<<n<<" ";
			n = n*3 + 1;
		}
	}
	cout<<n<<"\n";
	return 0;
}