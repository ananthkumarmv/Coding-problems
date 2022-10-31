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
		
		if(3*x <= 2*y)
			cout<<(3*x)<<"\n";
		else
			cout<<(2*y)<<"\n";

	}

	return 0;
}

