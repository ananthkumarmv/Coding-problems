#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int sroman(char c){
	switch(c){
		case 'I': return 1;
		case 'V': return 5;
		case 'X': return 10;
		case 'L': return 50;
		case 'C': return 100;
		case 'D': return 500;
		case 'M': return 1000;
	}
	return 0;
	
}


int romantoint(string s){
	ll sum=0;
	for(int i=0;i<s.length();i++){
		if(i!=s.length()-1){
			if(s[i]=='I'&&s[i+1]=='V') sum+=4;
			else if(s[i]=='I'&&s[i+1]=='X') sum+=9;
			else if(s[i]=='X'&&s[i+1]=='L') sum+=40;
			else if(s[i]=='X'&&s[i+1]=='C') sum+=90;
			else if(s[i]=='C'&&s[i+1]=='D') sum+=400;
			else if(s[i]=='C'&&s[i+1]=='M') sum+=900;
			else {
				sum+=sroman(s[i]);
				continue;
			}
			i++;
		}
		else sum+=sroman(s[i]);
		
	}
	return sum;
}




int main(){
	string s;
	cin>>s;
	cout<<romantoint(s);
	return 0;
}

