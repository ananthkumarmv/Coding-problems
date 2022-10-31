#include <iostream>
#include<utility>

using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	if(t>=1 && t<=288){
	    
	    while(t--){
	        
	        pair<int, int> pl[3];
	        
	        for(int i=0; i<3; i++)
	            cin>>pl[i].first>>pl[i].second;
	            
	       if(pl[0].first == pl[1].first && pl[0].second == pl[1].second ||
	          pl[0].first == pl[1].second && pl[0].second == pl[1].first){
	              
	              cout<<"1\n";
	              
	          }
	          
	       else if( (pl[0].first == pl[2].first && pl[0].second == pl[2].second) ||
	          (pl[0].first == pl[2].second && pl[0].second == pl[2].first)){
	              
	              cout<<"2\n";
	          }
	          
	        else 
	               cout<<"0\n";
	                    
	    }
	    
	}
	
	return 0;
}
