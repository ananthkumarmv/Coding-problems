#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int scores[9] = {0};
	int pi, si, n, totscore;
	
	int t;
	cin>>t;
	while(t--){
	    cin>>n;
	    
	    while(n--){
	        cin>>pi>>si;
	        
	        if(pi>=1 && pi<=8 && scores[pi]<si){
	            scores[pi]=si;
	        }
	    }
	    
	    totscore = 0;
	    for(int i=1; i<=8; i++){
	        totscore += scores[i];
	        scores[i] = 0;
	    }
	    
	    cout<<totscore<<"\n";
	    
	}
	return 0;
}
