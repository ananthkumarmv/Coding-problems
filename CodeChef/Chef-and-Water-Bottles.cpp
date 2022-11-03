#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int n, x, k;
		cin>>n>>x>>k;
		
		int i=0;
		while(k>=x && n>0){
			i++;
			n--;
			k -= x;
		}
		
		cout<<i<<"\n";
	}

	return 0;
}
