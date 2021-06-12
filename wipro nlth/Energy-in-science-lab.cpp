#include<iostream>
using namespace std;
int main(){
	int e,r,n,t;
	cin>>e>>r>>n;
	for(int i=1;i<=n;i++){
		if(i==1) t=e;
		else t=t*r;
		cout<<t<<" ";
	}

	return 0;
}

