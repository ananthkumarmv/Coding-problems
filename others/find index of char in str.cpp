#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	string s="abc abc abc abc";
	int found=-1;
	do{
		found=s.find('a',found+1);
		if(found!=-1) cout<<found<<endl;
	} while(found!=string::npos);
	return 0;
}

