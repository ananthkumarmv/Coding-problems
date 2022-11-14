#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	string str;
	int n;
	while(t--){
		
		cin>>str;
		
		sort(str.begin(), str.end());
		
		cout<<str<<"\n";
		
	}

	return 0;
}
