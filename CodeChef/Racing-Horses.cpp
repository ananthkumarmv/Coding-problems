#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int n;
		cin>>n;
		
		long long arr[n];
		
		for(int i=0; i<n; i++)
			cin>>arr[i];
			
		sort(arr, arr+n);
		
		long long min_diff = INT_MAX;
		
		for(int i=0; i<n-1; i++)
			if((arr[i+1]-arr[i] < min_diff))
				min_diff = arr[i+1]-arr[i];
				
		cout<<min_diff<<"\n";
		
	}

	return 0;
}
