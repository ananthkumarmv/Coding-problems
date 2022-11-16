#include<iostream>
#include<map>

using namespace std;

#define ll long long
#define mod 1000000007

ll f[1000001];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	f[0] = 0;
	f[1] = 1;
	
	for(ll j=2; j<1000000; j++)
		f[j] = (f[j-1]%mod * j)%mod;
	
	int n, x, tot;
	while(t--){
		
		cin>>n;
		map<ll, ll> m;
		
		for(int k=0; k<n; k++){
			cin>>x;
			m[x]++;
		}
		
		tot = 0;
		for(auto it : m){
			tot = (tot+(f[it.first]*it.second)%mod)%mod;
		}
		
		cout<<tot<<"\n";
		
	}

	return 0;
}
