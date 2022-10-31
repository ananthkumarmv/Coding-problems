#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int n, d, i;
	while(t--){
		
		cin>>n>>d;
		
		int arr[n];
		for(i=0; i<n; i++)
			cin>>arr[i];
			
		sort(arr, arr+n, greater<int>());

		for(i=0; i<n && d>0; i++)
			d -= arr[i];

		cout<<n-i<<"\n";
		
	}

	return 0;
}
