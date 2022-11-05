#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int n, a, sum = 0;
		cin>>n;
		
		while(n--){
			cin>>a;
			sum += a;
		}
		
		(sum&1) ? cout<<"YES\n" : cout<<"NO\n";
		
	}

	return 0;
}
