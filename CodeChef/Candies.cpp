#include<iostream>
#include<unordered_map>
#define ll long long

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	ll n;
	while(t--){
		
		cin>>n;
		
		ll arr[2*n];
		for(int i=0; i<2*n; i++)
			cin>>arr[i];
			
		unordered_map<ll, ll> mp;
		
		int flag = 1;
		for(int i=0; i<2*n; i++){
			mp[arr[i]]++;
			if(mp[arr[i]] > 2){
				flag = 0;
				break;
			}
		}
			
		flag ? cout<<"Yes\n" : cout<<"No\n";
		
	}

	return 0;
}
