#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int x;
	
	int p = 0;
	int cnt = 0;
	while(t--){
		
		cin>>x;
		
		if(x == -1){
			
			if(p>0)
				p--;
			else
				cnt++;
			
		}
		else
			p += x;
		
	}
	
	cout<<cnt<<"\n";

	return 0;
}
