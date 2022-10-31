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
	    int x;
	    cin>>x;
	    
	    (x>=1 && x<=4) ? cout<<"YES\n" : cout<<"NO\n";
	    
	}
	return 0;
}
