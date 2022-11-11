#include<iostream>

using namespace std;


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	long long n;
	while(t--){
		
		cin>>n;
		
		while(n%2 == 0){
			n /= 2;
		}
		
		if(n == 1){
			cout<<2<<"\n";
			continue;
		}
		
		
		for(long long i=3; i*i<=n; i += 2){
			
			while(n%i == 0){
				n /= i;
			}
			
			if(n == 1)
				cout<<i<<"\n";
			
		}
		
		if(n!=1)
			cout<<n<<"\n";
			
		}

	return 0;
}
