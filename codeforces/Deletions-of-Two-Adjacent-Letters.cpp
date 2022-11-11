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
		
		char c;
		cin>>c;
		
		int flag = 0;
		int n = str.length();
		for(int i=0; i<n; i++){
			
			if((str[i] == c) && ((i+1)&1)){
				flag = 1;
				break;
			}
			
		}
		
		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	}

	return 0;
}
