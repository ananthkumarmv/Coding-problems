#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		int x, y, z;
		cin>>x>>y>>z;
		
		int pop = (x-y+z);
		
		cout<<pop<<"\n";
		
	}

	return 0;
}
