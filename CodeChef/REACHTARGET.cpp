#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	if(t>=1 && t<=10){
	    while(t--){
	        int x, y;
	        cin>>x>>y;
	        cout<<(x-y)<<"\n";
	    }
	}
	return 0;
}
