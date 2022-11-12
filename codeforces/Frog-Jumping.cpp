#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	long long a, b, k;
	while(t--){
		
		cin>>a>>b>>k;
		
		if(k&1)
			cout<<((a*(k/2 + 1) - b*(k/2)))<<"\n";
		else
			cout<<((a*(k/2) - b*(k/2)))<<"\n";
		
	}

	return 0;
}
