#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		int arr[n];
		for(int i=0; i<n; i++)
			cin>>arr[i];
		
		int miss = 0;
		
		for(int i=0; i<n; i++)
			miss ^= arr[i];
			
		cout<<miss<<"\n";
	}

	return 0;
}
