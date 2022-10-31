#include<iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	
	int p, q;
	int c=0;
	while(n--){
		cin>>p>>q;
		if(p<q)
			c++;
	}
	
	cout<<c<<"\n";
	return 0;
}
