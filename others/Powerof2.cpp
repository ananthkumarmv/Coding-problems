#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int power(ll base,ll n){
	ll ans=1;
	while(n){
		if(n%2) ans=ans*base;
		base = base*base ;
		n>>=1;
	}
	return ans;
}


int main(){
	ll base=2,n=10;
	cout<<power(base,n);
	return 0;
}

