#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int x, y, z;
		cin>>x>>y>>z;
		
		if((x+y) <= z)
			cout<<2<<"\n";
		else if(x<=z)
			cout<<1<<"\n";
		else
			cout<<0<<"\n";
		
	}

	return 0;
}
