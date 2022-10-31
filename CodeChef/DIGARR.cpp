#include <iostream>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	
	while(t--){
	    ll d;
	    cin>>d;
	    string n;
	    getline(cin>>ws, n);
	    
	    int flag = 0;
	    for(int i=0; i<d; i++){
	        if(n[i] == '5' || n[i] == '0'){
	            flag = 1;
	            break;
	        }
	            
	    }
	    if(flag)
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	    
	}
	
	return 0;
}
