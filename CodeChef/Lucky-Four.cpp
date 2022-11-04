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
		
		int x = 0;
		while(n>0){
			
			int rem = n%10;
			
			if(rem == 4)
				x++;
			
			n /= 10;
		}
		
		cout<<x<<"\n";
		
	}

	return 0;
}
