#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		float s, a, b, c;
		cin>>s>>a>>b>>c;
		
		s = s + (s*c*0.01);
		
		if(s>=a && s<=b)
			cout<<"Yes\n";
		else
			cout<<"No\n";
			
	}

	return 0;
}
