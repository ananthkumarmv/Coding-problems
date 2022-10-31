#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int prev, grp=0;
	while(t--){
		int n;
		
		cin>>n;
		int r = n/10;
		
		if(grp == 0 || prev == r)
			grp++;
		
		prev = n%10;
		
	}
	
	cout<<grp<<"\n";

	return 0;
}
