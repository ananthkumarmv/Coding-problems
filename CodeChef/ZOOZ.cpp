#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int n;
		cin>>n;
		cout<<"1";
		for(int i=0; i<n-2; i++)
			cout<<"0";
		cout<<"1";
		cout<<"\n";

	}

	return 0;
}
