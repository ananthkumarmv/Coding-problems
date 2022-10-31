#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
	    int x[1001] = {0};
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	        
	    for(int i=0; i<n; i++)
	        x[arr[i]]++;
	    
	    int m=0;
	    for(int i=0; i<1001; i++)
	        m = max(m, x[i]);
	    
	   int c=0;
	   for(int i=0; i<1001; i++)
	        if(m == x[i])
	            c++;
	            
	    if(c>1)
	        cout<<"NO\n";
	    else
	        cout<<"YES\n";
	}
	
	return 0;
}
