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
		
		int tot = 0;	
		for(int i=0; i<3; i++){
			
			tot = tot + (str[i] - '0') - (str[6-i-1] - '0');
			
		}
		
		if(tot == 0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	}

	return 0;
}
