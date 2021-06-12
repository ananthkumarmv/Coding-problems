#include<iostream>
using namespace std;
int main(){
	int n,k,c=0;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if((a[i]-a[j]==k)||a[j]-a[i]==k) c++;
		}
	}
	cout<<c;

	return 0;
}

