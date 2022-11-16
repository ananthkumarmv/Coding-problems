#include<iostream>
#define ll long long

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int n;
	while(t--){
		
		cin>>n;
		
		if(n%2 == 0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	}

	return 0;
}
