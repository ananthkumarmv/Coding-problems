#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int n, x;
		cin>>n>>x;
		
		int tot = n/6;
		
		if(n%6 > 0)
			tot++;
		
		cout<<(tot*x)<<"\n";
		
	}

	return 0;
}
