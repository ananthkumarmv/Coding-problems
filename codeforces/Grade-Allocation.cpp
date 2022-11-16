#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int n, m, x, tot;
	while(t--){
		
		cin>>n>>m;
		
		tot = 0;
		
		while(n--){
			cin>>x;
			tot += x;
		}
		
		if(tot<=m)
			cout<<tot<<"\n";
		else
			cout<<m<<"\n";
		
	}

	return 0;
}
