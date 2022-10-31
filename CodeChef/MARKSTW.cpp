#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int x, y;
	cin>>x>>y;
	
	(x >= 2*y) ? cout<<"YES" : cout<<"NO";
	return 0;
}
