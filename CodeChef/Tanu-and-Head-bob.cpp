#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int n;
		cin>>n;
		
		string str;
		cin>>str;
		
		int cnt = 0;
		for(int i=0; i<n; i++){
			
			if(str[i] == 'I'){
				cnt = 1;
				cout<<"INDIAN\n";
				break;
			}
			
			else if(str[i] == 'Y'){
				cnt = 1;
				cout<<"NOT INDIAN\n";
				break;
			}
			
		}
		
		if(cnt == 0)
			cout<<"NOT SURE\n";
		
	}

	return 0;
}
