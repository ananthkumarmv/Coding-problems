#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int n, a;
	while(t--){
		
		cin>>n>>a;
		
		int UI = n-a;
		
		if(UI<=a)
			cout<<UI<<"\n";
		else
			cout<<a<<"\n";
		
	}

	return 0;
}
