#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    int x, y;
	    cin>>x>>y;
	    
	    if(x<y)
	        cout<<"FIRST\n";
	   else if(x == y)
	        cout<<"ANY\n";
	   else
	        cout<<"SECOND\n";
	}
	return 0;
}
