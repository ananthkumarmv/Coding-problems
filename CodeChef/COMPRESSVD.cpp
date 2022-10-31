#include <iostream>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll arr[n];
	    int c=0;
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        
	        if((i==0) || (arr[i-1]!=arr[i]))
	        	c++;
	    }
	    cout<<c<<"\n";
	}
	return 0;
}
