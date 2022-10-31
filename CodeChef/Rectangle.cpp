#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int a, b, c, d;
	while(t--){
		
		cin>>a>>b>>c>>d;
		
		if((a^b^c^d) == 0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	}

	return 0;
}
