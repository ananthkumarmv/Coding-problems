#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int Totmins = 1440;
	int h, m;
	while(t--){
		
		cin>>h>>m;
		
		cout<<(Totmins - (h*60+m))<<"\n";
		
	}

	return 0;
}
