#include<iostream>
#define ll long long
using namespace std;

ll cal(ll n){
	return (n*(n+1)/2);
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	ll n, a, b, c;
	while(t--){
		
		cin>>n;
		
		n--;
		
		a = n/3;
		b = n/5;
		c = n/15;
		
		cout<<((3*cal(a) + 5*cal(b)) - 15*cal(c))<<"\n";
		
	}

	return 0;
}
