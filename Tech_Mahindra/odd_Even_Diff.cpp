#include<iostream>


using namespace std;


int oddEvenDiff(int *a, int n){
	int even=0, odd=0;
	for(int i;i<n;i++){
		if(a[i]%2==0) even+=a[i];
		else odd+=a[i];
	}
	return odd-even;
}


int main(){
	
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++) cin>>a[i];
	
	cout<<oddEvenDiff(a, n);
	
	return 0;
}


