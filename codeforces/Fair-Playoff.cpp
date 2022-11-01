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
		
		int maxi1 = max(a, b);
		int maxi2 = max(c, d);
		
		if(maxi1 > min(c, d) && maxi2 > min(a, b))
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
		
	}

	return 0;
}
