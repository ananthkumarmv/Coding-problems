#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int a, b, c;
	while(t--){
		
		cin>>a>>b>>c;
		
		if( (a+b) == c || (a+c) == b || (b+c) == a )
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	}

	return 0;
}
