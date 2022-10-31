#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	if(t>=1 && t<=1000){
	    while(t--){
	        int x, h;
	        cin>>x>>h;
	        
	        if(x>=h)
	            cout<<"YES\n";
	           else
	            cout<<"NO\n";
	        
	    }
	}
	return 0;
}
