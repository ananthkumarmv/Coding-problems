#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int n, c=0;

		cin>>n;
		
		string s;
		cin>>s;
		
		for(int i=0; i<n-1; i++)
			if(s[i] == s[i+1])
				c++;
		
		cout<<c<<"\n";
	
	}

	return 0;
}
