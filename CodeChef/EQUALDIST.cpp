#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	
	while(t--){
	    int x, y;
	    cin>>x>>y;
	    
	    int res = (x+y)%2;
	    (res == 0) ? cout<<"YES\n" : cout<<"NO\n";
	    
	}
	return 0;
}
