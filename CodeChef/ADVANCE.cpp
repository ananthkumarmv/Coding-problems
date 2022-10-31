#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	if(t>=1&&t<=100){
	    while(t--){
	    int x, y;
	    cin>>x>>y;
	    
	    if( ((x+200) >= y) && (y >= x) )
	        cout<<"YES\n";
	    else 
	        cout<<"NO\n";
	    
	    }
	}
	
	
	return 0;
}
