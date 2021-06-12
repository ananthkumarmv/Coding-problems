#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	int k;
	char ch;
	cin>>ch;
	cin>>k;
	k=k%26;
	if(ch>='a'&& ch<='z'){
		if(ch+k>'z') ch=ch+k-26;
		else ch+=k;
	}
	if(ch>='A'&& ch<='Z'){
		if(ch+k>'Z') ch=ch+k-26;
		else ch+=k;
	}
	cout<<ch;
	return 0;
}

