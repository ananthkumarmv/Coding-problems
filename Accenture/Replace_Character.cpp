#include<iostream>
#include<cstring>

using namespace std;


void ReplaceCharacter(string str, int n, char c1, char c2){
	if(n==0){
		cout<<str;
		return;
	}
	
	for(int i=0;i<n;i++){
		if(str[i]==c1) str[i]=c2;
		
		else if(str[i]==c2) str[i]=c1;
		
		else continue;
	}
	
	cout<<str;
}



int main(){
	
	string str;
	getline(cin, str);
	
	char c1, c2;
	cin>>c1>>c2;
	int n=str.length();
	ReplaceCharacter(str, n, c1, c2);

	return 0;
}

