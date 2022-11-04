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
		
		((x/10) >= 100) ? cout<<(x/10)<<"\n" : cout<<100<<"\n";
		
	}

	return 0;
}
