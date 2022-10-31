#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x;
	cin>>x;
	
	int pos = x/5;
	
	if(x%5 > 0)
		pos++;
		
	cout<<pos<<"\n";
		
	return 0;
}
