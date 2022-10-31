#include <iostream>
#include<string>
using namespace std;

bool isVowel(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	
	while(t--){
	    
	    string str;
	    getline(cin>>ws, str);
	    
	    int consvowel = 0;
	    int flag = 0;
	    for(int i=0; i<str.length(); i++){
	        
	        if(isVowel(str[i])){
	            consvowel++;
	            if(consvowel>2){
	                flag = 1;
	                break;
	            }
	        }
	        else
	            consvowel=0;
	        
	    }
	    
	    if(flag)
	        cout<<"Happy\n";
	    else
	        cout<<"Sad\n";
	    
	}
	return 0;
}
