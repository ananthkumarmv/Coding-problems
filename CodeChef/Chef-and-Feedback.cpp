#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	while(n--){
	    string str;
	    cin>>str;
	    
	    bool flag = false;
	    
	    for(int i=0;i<str.length();i++){
	        
	        if((str[i] == '0' && str[i+1] == '1' && str[i+2] == '0') || (str[i] == '1' && str[i+1] == '0' && str[i+2] == '1')){
	            flag = true;
	        }
	        
	    }
	
	    if(flag)
	        cout<<"Good"<<endl;
	    else
	    cout<<"Bad"<<endl;
	    
	}
	
	return 0;
}
