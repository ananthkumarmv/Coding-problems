#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	
	while(t--){
		long long a, b;
		
		cin>>a>>b;
		
		if(a%b == 0)
			cout<<0<<"\n";
		else{
			int r = a%b;
			
			cout<<b-r<<"\n";
		}
		
	}

	return 0;
}
