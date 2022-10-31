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
		int h[n];
		for(int i=0; i<n; i++) cin>>h[i];
		
		int c=0;
		for(int i=0; i<n; i++)
			if(h[i]>k)
				c++;
		
		cout<<c<<"\n";
	}


	return 0;
}
