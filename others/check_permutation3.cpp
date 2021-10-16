#include<iostream>
using namespace std;
#define NO_OF_CHARS 256

bool checkPer(string s1, string s2){
	
	int count[NO_OF_CHARS] ={0};
	int i;
	
	for(i=0; s1[i]&&s2[i]; i++){
		count[s1[i]]++;
		count[s2[i]]--;
	}
	
	if(s1[i] || s2[i]) 
		return false;
		
	for(i=0; i<NO_OF_CHARS; i++)
		if(count[i])
			return false;
			
	return true;
}


int main(){
	string s1, s2;
	cin>>s1>>s2;
	
	if(checkPer(s1, s2))
		cout<<"Yes";
	else cout<<"No";
	
    return 0;
}


