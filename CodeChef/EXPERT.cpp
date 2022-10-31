#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	if(t>=1 && t<= 1000){
	    while(t--){
	        int x, y;
	        cin>>x>>y;
	        
	        int per = ((float)y/(float)x)*100;
	        
	        if(per >= 50)
	            cout<<"YES\n";
	        else
	            cout<<"NO\n";
	    }
	}
	return 0;
}
