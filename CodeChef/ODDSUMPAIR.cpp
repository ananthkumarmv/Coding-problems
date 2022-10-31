#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int a,b,c;
		cin>>a>>b>>c;
		
		if((a+b)%2 == 1 || (a+c)%2 == 1 || (b+c)%2 == 1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}

	return 0;
}
