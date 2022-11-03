#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int n, m;
		cin>>n>>m;
		
		if(m>=n)
			cout<<n<<"\n";
		
		else
			cout<<(n*2-m)<<"\n";
		
	}

	return 0;
}
