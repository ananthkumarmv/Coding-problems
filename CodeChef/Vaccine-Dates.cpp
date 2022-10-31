#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	long long d, l, r;
	while(t--){
		
		cin>>d>>l>>r;
		
		if(d<l){
			cout<<"Too Early\n";
		}
		
		else if(d>r)
			cout<<"Too Late\n";
			
		else if(d>=l && d<=r)
			cout<<"Take second dose now\n";
		
	}

	return 0;
}
