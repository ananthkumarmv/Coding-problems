#include<iostream>
#include<cmath>

using namespace std;


void absDiff1(int *a, int n){
	int c=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1; j<n;j++){
			if(abs(a[i]-a[j])<=1) c++;
		}
	}
	cout<<c;
}


int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	absDiff1(a, n);

	return 0;
}

