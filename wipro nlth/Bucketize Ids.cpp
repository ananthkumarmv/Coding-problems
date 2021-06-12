#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ll n;
	cin>>n;
	int a=0;
	while(n){
		if(a<n%10) a=n%10;
		n/=10;
	}
	cout<<a;


	return 0;
}

