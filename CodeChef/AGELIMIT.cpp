#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    int a1, a2, a;
	    cin>>a1>>a2>>a;
	    
	    if(a1<=a && a<a2)
	        cout<<"YES\n";
	       
	   else
	        cout<<"NO\n";
	}
	return 0;
}
