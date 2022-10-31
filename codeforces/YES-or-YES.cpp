#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		string str;
		cin>>str;
		
		for(int i=0; i<str.length(); i++)
			str[i] = toupper(str[i]);
			
		if(str == "YES")
			cout<<"YES\n";
			
		else
			cout<<"NO\n";
		
	}

	return 0;
}
