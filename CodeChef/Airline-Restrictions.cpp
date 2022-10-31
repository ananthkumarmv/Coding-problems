#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	int a, b, c, d, e;
	while(t--){
		
		cin>>a>>b>>c>>d>>e;
		
		if((a+b <= d) && (c<=e) || (b+c <= d) && (a<=e) || (a+c <= d) && (b<=e)){
			cout<<"YES\n";
		}
		else
			cout<<"NO\n";
		
	}

	return 0;
}
