#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		int a, b, c, d;
		cin>>a>>b>>c>>d;
		
		(a<b) ? a = a+c : b = b+c;
			
		(a<b) ? a = a+d : b = b+d;
			
		(a>=b) ? cout<<"N\n" : cout<<"S\n";
		
	}

	return 0;
}
