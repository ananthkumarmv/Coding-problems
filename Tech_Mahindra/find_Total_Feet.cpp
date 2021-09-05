#include<iostream>


using namespace std;

int findTotalFeet(int *a, int n){
	int c=0;
	for(int i=0;i<n;i++){
		c+=a[i]/12;
	}
	return c;
}



int main(){
	
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++) cin>>a[i];
	
	cout<<findTotalFeet(a, n);
	
	return 0;
}


