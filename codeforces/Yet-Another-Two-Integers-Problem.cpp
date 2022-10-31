#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		long long a, b;
		
		cin>>a>>b;
		
		if(b<a)
			swap(a, b);
		
		int diff, mod, div, sum;
		
		diff = b - a;
		div = diff/10;
		
		mod = diff%10;
		
		sum = div;
		
		if(mod>0)
			sum++;
			
		cout<<sum<<"\n";
		
	}

	return 0;
}
