#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		float n, m, k;
		
		cin>>n>>m>>k;
		
		(m>=(n+k)) ? cout<<"YES\n" : cout<<"NO\n";
		
	}

	return 0;
}
