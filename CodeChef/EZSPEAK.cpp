#include <iostream>
using namespace std;

bool isVowel(char c){
    return (c == 'a' || c == 'e' ||c == 'i' ||c == 'o' ||c == 'u');
}


bool checkEasyPronunciation(string str, int n){
    int conscons = 0;
	for(int i=0; i<n; i++){
	        
	  if(isVowel(str[i])){
	       conscons = 0;
	   }
	        
	   else{
	       conscons++;
	       if(conscons == 4)
	           return true;
	            
	   }
	        
	}
	    
	return false;
}



int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    string str;
	    
	    cin>>n;
	    
	    getline(cin>>ws, str);
	    
	    if(checkEasyPronunciation(str, n))
	        cout<<"NO\n";
	    else
	        cout<<"YES\n";
	    
	}
	return 0;
}
