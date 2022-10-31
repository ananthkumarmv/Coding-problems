#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	if(t>=1 && t<=10000){
	    while(t--){
	        int x;
	        cin>>x;
	        (67 <= x && x <= 45000) ? cout<<"YES\n" : cout<<"NO\n";
	    }
	}
	
	return 0;
}
