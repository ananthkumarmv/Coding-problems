#include<iostream>
#include<math.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int x;
	float y, z;
	while(t--){
		
		cin>>x>>y>>z;
		
		int c = ceil(y/z);
		cout<<(c * x)<<"\n";
		
	}

	return 0;
}
