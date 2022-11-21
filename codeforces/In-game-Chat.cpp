#include<iostream>
#define ll long long

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int n, cnt;
	string str;
	
	while(t--){
		
		cin>>n>>str;
		
		cnt = 0;
		for(int i=n-1; i>=0; i--){
			
			if(str[i] != ')' || cnt>n/2)
				break;
				
			cnt++;
			
		}
		
		cnt>n/2 ? cout<<"Yes\n" : cout<<"No\n";
		
	}

	return 0;
}
