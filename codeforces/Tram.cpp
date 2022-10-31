#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int cap = 0;
    int passin = 0;
    while(n--){
    	int a, b;
    	cin>>a>>b;
    	
    	passin -= a;
		passin += b;
    	cap = max(cap, passin);
    	
	}
	
	cout<<cap<<"\n";

    return 0;
}
