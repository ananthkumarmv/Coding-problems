#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	if(t>=1 && t<=100){
	    
	    while(t--){
	        int x;
	        cin>>x;
	        cout<<(100-x)<<"\n";
	    }
	    
	}
	
	return 0;
}
