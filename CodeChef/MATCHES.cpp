#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int matchescount[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

	int t;
	cin>>t;
	while(t--){
		int a, b;
		cin>>a>>b;
		
		int matches = 0;
		int c = a+b;
		while(c>0){
			int ld = c%10;
			matches = matches + matchescount[ld];
			c/=10;
		}
		
		cout<<matches<<"\n";

	}

	return 0;
}
