#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int x;
		cin>>x;
		
		if(x>=2000)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	}

	return 0;
}
