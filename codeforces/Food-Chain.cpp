#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	long long e, k;
	int i;
	while(t--){
		
		cin>>e>>k;
		
		i = 0;
		while(e>0){
			e = e/k;
			i++;
		}
		cout<<i<<"\n";
		
	}

	return 0;
}
