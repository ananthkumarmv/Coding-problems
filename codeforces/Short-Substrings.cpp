#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	string str;
	while(t--){
		
		cin>>str;
		
		int n = str.length();
		
		cout<<str[0]<<str[1];
		
		for(int i=3; i<n; i+=2){
			
			cout<<str[i];
			
		}
		
		cout<<"\n";
		
	}

	return 0;
}
