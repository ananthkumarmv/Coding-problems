#include<iostream>
#define ll long long

using namespace std;

ll gcd(ll a, ll b){
	return (a ==0) ? b : gcd(b%a, a);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	ll a, b, res;
	while(t--){
		
		cin>>a>>b;
		
		res = gcd(a, b);
		while(res>1){
			
			b /= res;
			res = gcd(a, b);
		}
		
		if(b == 1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	}

	return 0;
}
