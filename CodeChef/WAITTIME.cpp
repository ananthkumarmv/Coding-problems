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
	    int k, x;
	    cin>>k>>x;
	    
	    cout<<(k*7 - x)<<"\n";
	}
	return 0;
}
