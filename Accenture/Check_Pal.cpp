#include<iostream>

using namespace std;

void checkpal(string str){
	int len = 0;
	for(;str[len]!='\0';len++);
	
	int flag=0;
	for(int i=0;i<len;i++){
		if(str[i]>='A' and str[i]<='Z' || str[i]>='a' and str[i]<='z'){
			continue;
		}
		else{
			flag=1;
			break;
		}
	}
	
	string s = "";
	for(int i=len-1;i>=0;i--){
		s+=str[i];
	}
	
	if(flag!=1){
		if(str==s) cout<<"You inputted a strong string";
		else cout<<"You inputted a weak string";
	}
	
}

int main(){
	
	string s;
	cin>>s;
	
	checkpal(s);

	return 0;
}

