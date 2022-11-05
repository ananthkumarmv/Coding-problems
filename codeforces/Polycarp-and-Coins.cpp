#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	while(t--){
		
		long long n;
		cin>>n;
		
		int c1 = n/3;
		int c2 = n/3;
		
		if(n%3 == 1)
			c1++;
		else if(n%3 == 2)
			c2++;
			
		cout<<c1<<" "<<c2<<"\n";
		
	}

	return 0;
}
