#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	long long n, even, odd, sum, i; 
	while(t--){
		
		cin>>n;
		
		if((n/2)%2 == 1)
			cout<<"NO\n";
		
		else{
			cout<<"YES\n";
			even = 2;
			sum=0;
			while(even<=n){
				sum += even;
				cout<<even<<" ";
				even += 2;
			}
			
			i = n/2;
			odd = 1;
			while(i>1){
				cout<<odd<<" ";
				sum -= odd;
				odd += 2;
				i--;
			}
			
			cout<<sum<<"\n";
			
		}
			
	}

	return 0;
}
