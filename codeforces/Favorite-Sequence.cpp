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
    	
		for(int i=0; i<n/2; i++)
			cout<<arr[i]<<" "<<arr[n-i-1]<<" ";
			
		if(n&1)
			cout<<arr[n/2];	
			
		cout<<"\n";
    	
	}

	return 0;
}
