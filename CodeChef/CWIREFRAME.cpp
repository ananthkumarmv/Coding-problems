#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int n, m, x;
		cin>>n>>m>>x;
		
		cout<<((2*n + 2*m )* x)<<"\n";

	}

	return 0;
}
