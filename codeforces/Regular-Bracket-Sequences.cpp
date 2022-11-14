#include<iostream>

using namespace std;

void printBrackets(int n){
	
	for(int i = 0; i<n; i++)
		cout<<"(";
		
	for(int i = 0; i<n; i++)
		cout<<")";
		
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int n;
	while(t--){
		
		cin>>n;
		
		for(int i=0; i<n; i++){
			
			printBrackets(i);
			printBrackets(n-i);
			cout<<"\n";
			
		}
		
	}

	return 0;
}
