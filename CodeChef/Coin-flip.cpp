#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int g, n, i, q;
	while(t--){
		
		cin>>g;
		
		while(g--){
			
			cin>>i>>n>>q;
			
			if(n%2 == 0 || (i == 1 && q == 1) || (i == 2 && q == 2)){
				cout<<n/2<<"\n";
			}
			
			else
				cout<<(n+1)/2<<"\n";
	
		}
		
	}

	return 0;
}
