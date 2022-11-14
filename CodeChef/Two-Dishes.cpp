#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int n, a, b, c, mini;
	while(t--){
		
		cin>>n>>a>>b>>c;
		
		if(n>min(a+c, b))
			cout<<"NO\n";
		else
			cout<<"YES\n";
			
	}

	return 0;
}
