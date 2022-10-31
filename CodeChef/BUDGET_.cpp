#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int x, y;
		cin>>x>>y;
		
		if(x >= (y*30))
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	}

	return 0;
}
