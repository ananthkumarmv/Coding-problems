#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int a, b;
	
	cin>>a>>b;
	
	int diff = min(a, b);
	
	int same = (max(a, b) - diff)/2;
	
	cout<<diff<<" "<<same;

	return 0;
}
