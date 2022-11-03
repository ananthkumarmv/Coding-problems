#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	
	if(n%4 == 0)
		cout<<n+1<<"\n";
	else
		cout<<n-1<<"\n";

	return 0;
}
