#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int a, b;
	cin>>a>>b;
	
	int c = a - b;
	
	int r = c%10;
	
	if(r == 9)
		c--;
	else
		c++;
		
	cout<<c<<"\n";

	return 0;
}
