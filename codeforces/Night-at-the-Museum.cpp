#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin>>str;
	
	int n = str.length();
	
	int mini = 0;
	
	char c = 'a';
	for(int i=0; i<n; i++){
		
		mini += min(26 - abs(str[i] - c), abs(str[i] - c));
		c = str[i];
		
	}
	
	cout<<mini;

	return 0;
}
