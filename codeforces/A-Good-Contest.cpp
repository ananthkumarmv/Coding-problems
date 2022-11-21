#include<iostream>
#define ll long long

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	string str;
	int n, b, a;
	
	int flag = 0;
	while(t--){
		
		cin>>str>>b>>a;
		
		if(b>=2400 && a>b){
			flag = 1;
			break;
		}
		
	}
	
	flag ? cout<<"YES\n" : cout<<"NO\n";

	return 0;
}
