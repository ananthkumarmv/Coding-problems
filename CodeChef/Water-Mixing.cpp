#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int x, y, a, b;
	while(t--){
		
		cin>>x>>y>>a>>b;
		
		if(x == y)
			cout<<"YES\n";
			
		if(y>x){
			if((x+a)>=y){
				cout<<"YES\n";
			}
			else
				cout<<"NO\n";
		}
		
		else if(x>y){
			if((x-b)<=y){
				cout<<"YES\n";
			}
			else
				cout<<"NO\n";
		}
		
	}

	return 0;
}
