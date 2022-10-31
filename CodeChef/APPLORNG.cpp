#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int x, a, b;
	
	cin>>x>>a>>b;
	int tot = a+b;
	
	(tot<=x) ? cout<<"YES" : cout<<"NO";
	
	return 0;
}
