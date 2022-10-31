#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    float a, b, x, y;
	    cin>>a>>b>>x>>y;
	    
	    float chef = a/x;
	    float chefina = b/y;
	    
	    if(chef < chefina) cout<<"Chef\n";
	    else if(chefina < chef) cout<<"Chefina\n";
	    else
	        cout<<"Both\n";
	    
	}
	return 0;
}
