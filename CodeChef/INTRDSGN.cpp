#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int x1, x2, y1, y2;
		cin>>x1>>y1>>x2>>y2;
		
		((x1+y1) >= (x2+y2)) ? cout<<(x2+y2)<<"\n" : cout<<(x1+y1)<<"\n";		
	}

	return 0;
}
