#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int n;
	while(t--){
		
		long long tot = 0;
		cin>>n;
		
		while(n>0){
			tot = tot + n*n;
			n -= 2;
		}
		
		cout<<tot<<"\n";
		
	}

	return 0;
}
