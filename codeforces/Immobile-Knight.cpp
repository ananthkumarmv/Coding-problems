#include<iostream>
#define ll long long

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int n, m;
	while(t--){
		
		cin>>n>>m;
		
		if((n == 1) || (m == 1))
			cout<<n<<" "<<m<<"\n";
		
		else if((n<=3 && m<=3))
			cout<<2<<" "<<2<<"\n";
		
		else
			cout<<n<<" "<<m<<"\n";	
		
	}

	return 0;
}
