#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int n, x, y;
		
		cin>>n>>x>>y;
		int c0=0, c1=0;
		
		string str;
		cin>>str;
		
		for(int i=0; i<n; i++){
			if(str[i] == '0')
				c0++;
			else
				c1++;
		}
		
		if(c0 == n || c1 == n)
			cout<<"0\n";
			
		else if(x<y)
			cout<<x<<"\n";
		else
			cout<<y<<"\n";
		
	}

	return 0;
}
