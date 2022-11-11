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
		
		
		int flag = 1;
		for(int i=0; i<n/2; i++){
			
			if(str[i] != str[n/2+i]){
				flag = 0;
				break;
			}
			
		}
		
		flag ? cout<<"YES\n" : cout<<"NO\n";
		
	}

	return 0;
}
