#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int w1, w2, x1, x2, m;
	while(t--){
		
		cin>>w1>>w2>>x1>>x2>>m;
		
		int w = w2-w1;
		
		if(w>= x1*m && w<=x2*m)
			cout<<"1\n";
		else
			cout<<"0\n";
		
	}

	return 0;
}
