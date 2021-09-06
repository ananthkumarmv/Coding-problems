#include<iostream>


using namespace std;

int findDiff(int m,  int n){
	int d=0, nd=0;
	for(int i=1;i<=n;i++){
		if(i%m==0) d+=i;
		else nd+=i;
	}
	return (nd-d);
}



int main(){
	int m, n;
	cin>>m>>n;
	cout<<findDiff(m, n);

	return 0;
}

