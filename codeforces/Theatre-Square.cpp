#include<iostream>
typedef long long ll;
using namespace std;
int main(){
	ll n,m,a,len,bre;
	cin>>n>>m>>a;
	len = n/a;
	if(n%a!=0) len++;
	bre=m/a;
	if(m%a!=0) bre++;
	cout<<len*bre;


	return 0;
}

