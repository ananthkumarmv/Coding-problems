#include<iostream>
#include<cmath>

using namespace std;

int findCount(int *arr, int n, int num, int diff){
	int c=0;
	for(int i=0;i<n;i++){
		if(abs(arr[i]-num)<=diff){
			cout<<abs(arr[i]-num)<<" ";
			c++;
		}
	}
	return c>0 ? c:-1;
}


int main(){
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	int num;
	cin>>num;
	
	int diff;
	cin>>diff;
	
	cout<<findCount(a, n, num, diff);

	return 0;
}

