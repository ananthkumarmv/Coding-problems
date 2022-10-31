#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	
	while(t--){
	    
	    int a, b, c;
	    cin>>a>>b>>c;
	    
	    if(a>b && a>c)
	    	cout<<"Alice\n";
	    else if(b>a && b>c)
	    	cout<<"Bob\n";
	    else
	    	cout<<"Charlie\n";
	    
	}
	return 0;
}
