#include<iostream>

using namespace std;

#define mod 998244353

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int n;
	long long x;
	unsigned long long tot;
	while(t--){
		
		cin>>n;
		
		tot = 0;
		while(n--){
			cin>>x;
			
			tot = (tot%mod + x%mod)%mod;	
		}
		
		cout<<(((tot-1)%mod * (tot%mod))%mod)<<"\n";
		
	}

	return 0;
}
