#include<iostream>


using namespace std;


int calcTotalTax(int *a, int n){
	int tax=0;
	for(int i=0;i<n;i++){
		if(a[i]>1000) tax += (a[i]-1000)*0.1;
	}
	return tax;
}


int main(){
	
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++) cin>>a[i];
	
	cout<<calcTotalTax(a, n);
	
	return 0;
}

