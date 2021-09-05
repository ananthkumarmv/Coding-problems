#include<iostream>
#include<limits>

using namespace std;

int minMaxDiff(int *a, int n){
	int max=INT_MIN;
	int min=INT_MAX;
	
	for(int i=0;i<n;i++){
		if(a[i]>max) max=a[i];
		
		if(a[i]<min) min=a[i];
	}
	return max-min;
}


int main(){
	
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++) cin>>a[i];
	
	cout<<minMaxDiff(a, n);
	
	return 0;
}

