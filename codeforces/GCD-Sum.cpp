#include<iostream>
#include<algorithm>
#define ll long long

using namespace std;

ll sumDigits(ll n){
	
	ll sum = 0;
	while(n>0){
		
		sum += n%10;
		n /= 10;
		
	}
	return sum;
	
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	ll n, sum;
	while(t--){
		
		cin>>n;
		
		sum = sumDigits(n);
		
		while(__gcd(n, sum) <= 1){
			n++;
			sum = sumDigits(n);
		}
		
		cout<<n<<"\n";
		
	}

	return 0;
}
