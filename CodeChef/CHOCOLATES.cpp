#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	if(t>=1 && t<=100){
	    while(t--){
	        int x, y, z;
	        cin>>x>>y>>z;
	        int tot = ((x*5 + y*10)/z);
	        cout<<tot<<"\n";
	        
	    }
	}
	
	return 0;
}
