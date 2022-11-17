#include<iostream>
#define ll long long

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
		
		int flag = 1;
		for(int i=1; i<n; i++){
			if(arr[i]%arr[0] != 0){
				flag = 0;
				break;
			}
		}
		
		flag ? cout<<"YES\n" : cout<<"NO\n";
		
	}

	return 0;
}
