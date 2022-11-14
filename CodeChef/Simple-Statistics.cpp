#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int n, k;
	double sum, c;
	while(t--){
		
		cin>>n>>k;
		
		int arr[n];
		
		for(int i=0; i<n; i++)
			cin>>arr[i];
		
		sort(arr, arr+n);
		
		sum = 0;
		c = n - 2*k;
		for(int i=k; i<n-k; i++)
			sum += arr[i];
		
		cout<<fixed<<setprecision(6)<<(sum/c)<<"\n";
		
		
	}

	return 0;
}
