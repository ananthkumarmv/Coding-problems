#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin>>str;
	
	int u=0;
	for(int i=0; i<str.length(); i++){
		if(isupper(str[i]))
			u++;
	}
	
	int l = str.length() - u;
	
	if(l>=u){
		for(int i=0; i<str.length(); i++)
			str[i] = tolower(str[i]);
	}
	
	else{
		for(int i=0; i<str.length(); i++)
			str[i] = toupper(str[i]);
	}
	
	cout<<str<<"\n";
	
	return 0;
}
