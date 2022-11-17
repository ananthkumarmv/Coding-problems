#include<iostream>
#define ll long long

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		string str;
		cin>>str;
		
		int n = str.length();
		
		int maxbal = 0, bal = 0;
		for(int i=0; i<n; i++){
			
			if(str[i] == '('){
				bal++;
				maxbal = max(maxbal, bal);
			}
			else
				bal--;
				
		}
		
		for(int i=0; i<maxbal; i++)
			cout<<"(";
			
		for(int i=0; i<maxbal; i++)
			cout<<")";	
		
		cout<<"\n";
	}

	return 0;
}
