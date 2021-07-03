#include<iostream>
#include<algorithm>
#define ll long long

using namespace std;

int main() {
	string s;
	getline(cin,s);
	
	string newstring = "";
	int l = s.length()-1;
	while(l>=0){
		newstring+=s[l];
		l--;
	}
	cout<<newstring;
    
    return 0;
}


