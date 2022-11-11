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
		int x;
		int odd = 0;
		n *= 2;
		for(int i=0; i<n; i++){
			
			cin>>x;
			if(x&1)
				odd++;
			
		}
		
		if(odd == n/2)
			cout<<"Yes\n";
		else
			cout<<"No\n";
		
	}

	return 0;
}
