#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int x, y;
		
		cin>>x>>y;
		
		int cho = 2*x;
		int can = 5*y;
		
		if(cho>can)
			cout<<"Chocolate\n";
		else if(can>cho)
			cout<<"Candy\n";
		else
			cout<<"Either\n";
			
	}

	return 0;
}
