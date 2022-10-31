#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin>>t;
	
	int x;
	while(t--){
		
		cin>>x;
		
		if(x>= 1 && x<100)
			cout<<"Easy\n";
		
		else if(x>=100 && x<200)
			cout<<"Medium\n";
		
		else
			cout<<"Hard\n";
		
	}

	return 0;
}
