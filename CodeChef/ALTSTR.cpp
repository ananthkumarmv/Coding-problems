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
		
		int c0=0, c1=0;
		
		for(int i=0; i<n; i++){
			if(str[i] == '0')
				c0++;
			else
				c1++;
		}
		

		if(c0>c1)
			cout<<(2*c1+1)<<"\n";
		else if(c1>c0)
			cout<<(2*c0+1)<<"\n";
		else
			cout<<n<<"\n";
		
	}

	return 0;
}
