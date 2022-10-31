#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    int n, x;
	    
	    cin>>n>>x;
	    if((n*x)%4 == 0)
	        cout<<((n*x)/4)<<"\n";
	    else
	        cout<<(((n*x)/4)+1)<<"\n";
	}
	return 0;
}
