#include<iostream>
#include<algorithm>

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
		
		if(n&1){
			cout<<"NO\n";
			continue;
		}
		
		int b = count(str.begin(), str.end(), 'B');
		
		if(b != n/2)
			cout<<"NO\n";
		else
			cout<<"YES\n";
		
	}

	return 0;
}
