#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int x, y;
	while(t--){
		
		cin>>x>>y;
		
		if(x>y)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	}

	return 0;
}
