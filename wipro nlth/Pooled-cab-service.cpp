#include<iostream>
using namespace std;
int main(){
	int n,s,e;
	cin>>n>>s>>e;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<0) a[i]=-a[i];
		
	} 
	for(int i=0;i<n;i++){
		if(a[i]>=s&&a[i]<=e) cout<<a[i]<<" ";
	}
	return 0;
}

