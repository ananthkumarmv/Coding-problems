#include<iostream>
using namespace std;

int main(){
	
	int n, k;
	
	cin>>n>>k;
	
	int a[n];
	for(int i=0; i<n;i++) cin>>a[i];
	
	int y;
	
	for(int i=0; i<k; i++){
		int u,v;
		y=0;
		cin>>u>>v;
		for(int j=u-1; j<v; j++){
			y^=a[j];
		}
		cout<<y<<endl;
	}
	
	return 0;
	
}


