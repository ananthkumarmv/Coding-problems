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
		
		for(int i=0; i<n; i++){
			
			if(str[i] == 'U')
				cout<<"D";
			else if(str[i] == 'D')
				cout<<"U";
			else
				cout<<str[i];
			
		}
		cout<<"\n";
		
	}

	return 0;
}
