#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin>>n>>k;
	
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
	
	int c = 0;
	for(int i=0; i<n; i++)
		if(arr[i]>0 && arr[i] >= arr[k-1])
			c++;
			
	cout<<c<<"\n";

	return 0;
}
