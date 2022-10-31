#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	string str;
	cin>>str;
	
	int t;
	cin>>t;
	while(t--){
		
		string rstr;
		cin>>rstr;
		
		int flag=0;
		
		for(int i=0; i<rstr.length(); i++){
			if(str.find(rstr[i]) == string::npos){
				flag = 1;
				break;
			}
		}
		
		if(flag)
			cout<<"No\n";
		else
			cout<<"Yes\n";
		
	}

	return 0;
}
