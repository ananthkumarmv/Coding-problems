#include<iostream>
using namespace std;
int main(){
	int n,d,c=0;
	cin>>n>>d;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>0&&d%a[i]==0) c++;
	}
	cout<<c;

	return 0;
}

