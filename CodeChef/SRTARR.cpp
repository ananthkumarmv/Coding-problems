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
		
		int c=0;
		
		for(int i=0; i<n-1; i++){
			if(str[i] == '1' && str[i+1] == '0')
				c++;
		}
		
		cout<<c<<"\n";
	}

	return 0;
}
