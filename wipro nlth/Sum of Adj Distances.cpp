#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	     cin>>a[i];
	int sum=0,t;
	for(int i=0;i<n-1;i++){
		t=a[i]-a[i+1];
		if(t<0)
		   t=-t;
		sum=sum+t;
	}
	cout<<sum;
	return 0;
}

