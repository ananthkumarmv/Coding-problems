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
		
		int tot = 120 - n;
		
		for(int i=0; i<n; i++)
			if(str[i] == '1')
				tot++;
		
		if((double(tot)/120) >= 0.75)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	}

	return 0;
}
