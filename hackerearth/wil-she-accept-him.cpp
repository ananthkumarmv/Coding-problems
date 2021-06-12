#include<bits/stdc++.h>
typedef long long ll;
using namespace std;



int main(){
	int t;
	cin>>t;
	while(t--){
		int i=0,count=0;
		string s1,s2;
		cin>>s1>>s2;
		for(int j=0;j<s2.length();j++){
		if(s1[i]==s2[j]){
			i++;
			count++;
		}
		 
	}
	if(count==s1.length()) cout<<"Love you too\n";

        else cout<<"We are only friends\n";
	}

	return 0;
}

