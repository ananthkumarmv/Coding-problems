#include<iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string str1, str2;
	cin>>str1>>str2;
	
	int flag=1;
	int n = str1.length();
	for(int i=0; i<n; i++){
		
		if(str1[i] != str2[n-i-1]){
			flag = 0;
			break;
		}
		
	}
	
	flag ? cout<<"YES\n" : cout<<"NO\n";

	return 0;
}
