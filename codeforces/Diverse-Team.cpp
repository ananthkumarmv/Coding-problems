#include<iostream>
#include<vector>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin>>n>>k;
	
	int arr[n];
	
	for(int i=0; i<n; i++)
		cin>>arr[i];
	
	int vis[101] = {0};
	
	vector<int> v;
	
	for(int i=0; i<n; i++){
		
		if(vis[arr[i]] == 0){
			v.push_back(i+1);
			vis[arr[i]] = 1;
		}
			
	}
	
	if(v.size()>=k){
		cout<<"YES\n";
		for(int i=0; i<k; i++)
			cout<<v[i]<<" ";
	}
	else
		cout<<"NO\n";

	return 0;
}
