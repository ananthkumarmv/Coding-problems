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
		
		int win=0, lose=0;
		
		for(int i=0; i<str.length(); i++){
			if(str[i] == '1')
				win++;
				
			else
				lose++;
		}
		
		if(win>lose)
			cout<<"WIN\n";
		else
			cout<<"LOSE\n";
		
	}

	return 0;
}
