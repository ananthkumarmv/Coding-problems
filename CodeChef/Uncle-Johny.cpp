#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int n, k, bs;
	while(t--){
		
		cin>>n;
		int arr[n];
		
		for(int i=0; i<n; i++)
			cin>>arr[i];
		
		cin>>k;
			
		bs = arr[k-1];
		
		sort(arr, arr+n);
		
		for(int i=0; i<n; i++){
			if(arr[i] == bs){
				cout<<i+1<<"\n";
				break;
			}
		}
		
	}

	return 0;
}
