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
		
		if(x>=y)
			cout<<(7-x)<<"\n";
		else
			cout<<(7-y)<<"\n";
	}

	return 0;
}
