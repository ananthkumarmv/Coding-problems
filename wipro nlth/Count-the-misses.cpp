#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	int c=0;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(!(s[i]>='a'&&s[i]<='z') || (s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')||(s[i]=='\0')) c++;
	}
	cout<<c;

	return 0;
}


