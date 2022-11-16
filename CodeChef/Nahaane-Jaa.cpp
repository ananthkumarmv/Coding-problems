#include<iostream>
#define ll long long

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	ll n, k, x;
	while(t--){
		
		cin>>n>>k;
		
		ll arr[n];
		int flag = -1;
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		
		if(n == 1 && arr[0] == k){
			cout<<"Yes\n";
			continue;
		}
		else{
			cout<<"No\n";
			continue;
		}
		
		for(int i=0; i<n-1; i++){
			if(arr[i] == k){
				flag = i;
				break;
			}
		}
		
		(flag != -1) ? cout<<"Yes\n" : cout<<"No\n";
		
	}

	return 0;
}
