#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int n;
	long long sum, x;
	while(t--){

		cin>>n;
		sum = 0;
		for(int i=0; i<n; i++){
			cin>>x;
			sum += x;
		}
		
		if(sum%n == 0)
			cout<<(sum/n)<<"\n";
		else
			cout<<(sum/n+1)<<"\n";
		
	}

	return 0;
}
