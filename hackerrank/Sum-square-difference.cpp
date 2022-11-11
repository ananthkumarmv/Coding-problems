#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	long long n, a, b;
	while(t--){
		
		cin>>n;
		
		a = (n*(n+1)*(2*n+1))/6;
		b = (n*(n+1))/2;
		b *= b;
		
		cout<<(b - a)<<"\n";
		
	}

	return 0;
}
