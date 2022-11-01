#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int x, y, z;
	while(t--){
	
		
		cin>>x>>y>>z;
		
		if(y<=x)
			cout<<"PIZZA\n";
		else if(z<=x)
			cout<<"BURGER\n";
		else
			cout<<"NOTHING\n";
	
	}

	return 0;
}
