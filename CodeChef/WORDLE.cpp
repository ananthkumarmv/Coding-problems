#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s1, s2;
	
	int t;
	cin>>t;
	while(t--){
	    
	    getline(cin>>ws, s1);
	    getline(cin>>ws, s2);
	    
	    for(int i=0; i<5; i++){
	        if(s1[i]==s2[i])
	            cout<<"G";
	        else
	            cout<<"B";
	    }
	    cout<<"\n";
	    
	}
	return 0;
}
