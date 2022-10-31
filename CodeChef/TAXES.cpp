#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	if(t>=1 && t<=100){
	    while(t--){
	        int n;
	        cin>>n;
	        if(n>100)
	            cout<<(n-10)<<"\n";
	        else
	            cout<<n<<"\n";
	    }
	}
	return 0;
}
