#include<iostream>

using namespace std;

int compute(int r, int u, int n, int *a){
	if(n==0) return -1;
	
	int i=0;
	int totfood = r*u;
	while(totfood>0){
		cout<<totfood<<" ";
		totfood-=a[i];
		i++;
	}
	
	if(totfood==0) return i;
	
	return 0;
}

int main(){
	
	int r, u, n;
	cin>>r>>u>>n;
	int a[n];
	
	for(int i=0;i<n;i++) cin>>a[i];
	
	cout<<compute(r, u, n, a);

	return 0;
}

