#include<iostream>
#include<climits>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int n;
	while(t--){
		
		cin>>n;
		
		int arr[n];
		
		for(int i=0; i<n; i++)
			cin>>arr[i];
			
		int freq[11]={0};
		
		for(int i=0; i<n; i++){
			freq[arr[i]]++;
		}
		
		int maxi = INT_MIN;
		
		for(int i=0; i<11; i++){
			maxi = max(maxi, freq[i]);
		}
		
		cout<<(n-maxi)<<"\n";
		
	}

	return 0;
}
