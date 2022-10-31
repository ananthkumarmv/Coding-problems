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
	        if(x>y)
	            cout<<"A\n";
	        else
	            cout<<"B\n";
	    }
	}
	return 0;
}
