#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	if(t>=1 && t<=100){
	    while(t--){
	        int x, y;
	        cin>>x>>y;
	        
	        if(x<=y)
	            cout<<(y-x)<<"\n";
	       else 
	            cout<<(x-y)<<"\n";
	        
	    }
	}
	return 0;
}
