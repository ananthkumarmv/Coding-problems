#include<iostream>

using namespace std;

int compute(int r, int u, int n, int *a){
	if(n==0) return -1;
	
	int totfood = r*u;
	int foodTillNow = 0;
	int i=0;
	
	for(; i<n;i++){
		foodTillNow+=a[i];
		if(foodTillNow>=totfood) break;
	}
	
	if(totfood>foodTillNow) return 0;
	return i+1;
}

int main(){
	
	int r, u, n;
	cin>>r>>u>>n;
	int a[n];
	
	for(int i=0;i<n;i++) cin>>a[i];
	
	cout<<compute(r, u, n, a);

	return 0;
}

