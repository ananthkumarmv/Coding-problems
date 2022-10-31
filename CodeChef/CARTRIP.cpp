#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		
		if(x>300)
			cout<<(x*10)<<"\n";
		else
			cout<<"3000\n";

	}

	return 0;
}
