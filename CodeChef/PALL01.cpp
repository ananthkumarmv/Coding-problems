#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int num, revnum;
	
	int t;
	cin>>t;
	while(t--){
	    
	    cin>>num;
	    revnum = 0;
	    int temp=num;
	    while(num>0){
	        revnum = revnum * 10 + num%10;
	        num/=10;
	    }
	    if(temp == revnum)
	        cout<<"wins\n";
	    else
	        cout<<"loses\n";
	    
	}
	
	return 0;
}
