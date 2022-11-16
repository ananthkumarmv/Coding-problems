#include<iostream>
#define ll long long

using namespace std;

bool isPrime(int n){
	
	if(n<=1)
		return false;
		
	if(n <= 3)
		return true;
		
	if(n%2 == 0 || n%3 == 0)
		return false;
		
	for(int i=5; i*i<=n; i += 6){
		if(n%i == 0 || n%(i+2) == 0)
			return false;
	}
	
	return true;
	
}



int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int a, b;
	while(t--){
		
		cin>>a>>b;
		
		if(isPrime(a+b)){
			cout<<"Alice\n";
		}
		else
			cout<<"Bob\n";
	}

	return 0;
}
