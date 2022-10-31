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
		
		int disTot = x*100;
		int clthTot = y*10;
		
		if(disTot>=clthTot)
			cout<<"Cloth\n";
		else
			cout<<"Disposable\n";
		
	}

	return 0;
}
