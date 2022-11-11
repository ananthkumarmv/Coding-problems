#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		long long n, k;
		cin>>n>>k;
		
		if(n>=k && k!=0)
			cout<<(n%k)<<"\n";
		else
			cout<<n<<"\n";
	}

	return 0;
}
