#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int r;
	cin>>r;
	if(r>0 && r<51)
	    cout<<"100\n";
	else if(r>50 && r<101)
	    cout<<"50\n";
	else
	    cout<<"0\n";
	return 0;
}
