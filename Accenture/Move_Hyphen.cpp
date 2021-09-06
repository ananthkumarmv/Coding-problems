#include<iostream>
#include<string>

using namespace std;


string MoveHyphen(string s){
	if(s.length()<=0) return "";
	int c=0;
	string s1="";
	for(int i=0;s[i]!='\0';i++){
		if(s[i]=='-') c++;
	}
	while(c--) s1+="-";
	
	for(int i=0;s[i]!='\0';i++){
		if(s[i]=='-') continue;
		else s1+=s[i];
	}
	
	return s1;
}


int main(){
	
	string s;
	getline(cin, s);
	cout<<MoveHyphen(s);
	
	return 0;
}

