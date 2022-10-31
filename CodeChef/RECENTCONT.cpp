#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	
	while(t--){
	    
	    int n;
	    cin>>n;
	    
	    string str[n];
	    
	    for(int i=0; i<n; i++)
	    	cin>>str[i];
	    	
	    int s=0, l=0;
	    
	    for(int i=0; i<n; i++){
	    	if(str[i]== "START38")
	    		s++;
	    	else
	    		l++;
		}
		
		cout<<s<<" "<<l<<"\n";
	    
	}
	return 0;
}
