#include<iostream>
#include <string>

using namespace std;

bool isVowel(char c){
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
	        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}


string decryptText(string str, int s)
{
    
    string alpha = "bcdfghjklmnpqrstvwxyz";
    
    for (int i = 0; i < str.length(); i++) {
    	
    	if(isalpha(str[i])){
    		if(isVowel(str[i])){
	    		str[i] = tolower(str[i]);
			}
			else{
				int pos = alpha.find(str[i]);
				
				if(pos < 0){
					pos += 21;
				}
				str[i] = alpha[pos];
			}
		}
    }

    return str;
}


string encryptText(string str, int s)
{
    
    string alpha = "bcdfghjklmnpqrstvwxyz";
    
    for (int i = 0; i < str.length(); i++) {
    	
    	if(isalpha(str[i])){
    	
	    	if(isVowel(str[i])){
	    		str[i] = toupper(str[i]);
			}
			else{
				int pos = (alpha.find(str[i]) + s) % 21;
				str[i] = alpha[pos];
			}
		}
    
	}

    return str;
}


int main(){

	string str;
	
	getline(cin, str);
	
	cout<<str<<'\n';
	string encrypted = encryptText(str, 11);
	string decrypted = decryptText(str, 11);
	
	cout<<encrypted<<'\n'<<decrypted;

	return 0;
}
