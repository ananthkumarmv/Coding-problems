#include<iostream>
#define ll long long
#define mod 1000000007

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	ll arr[100000];
	
	arr[0] = 1;
	for(int i=1; i<100000; i++){
		arr[i] = (arr[i-1] *2)%mod;
	}
	
	int n;
	while(t--){
		
		cin>>n;
		
		cout<<arr[n-1]<<"\n";
		
	}

	return 0;
}
