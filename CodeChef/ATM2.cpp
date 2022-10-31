#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int n, k;
		cin>>n>>k;
		int a;
		
		for(int i=0; i<n; i++){
			cin>>a;
			
			if(k>=a){
				cout<<"1";
				k -= a;
			}
			
			else
				cout<<"0";
		}
		cout<<"\n";

	}

	return 0;
}
