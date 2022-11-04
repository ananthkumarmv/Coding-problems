#include<iostream>
#define ll long long 

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		ll a, b, c, n;
		
		cin>>a>>b>>c>>n;
		
		ll maxi = max(a, max(b, c));
		
		ll sum = a+b+c;
		
		ll req = maxi*3 - sum;
		
		if(((n-req) >= 0)  && (n-req)%3 == 0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	}

	return 0;
}
