#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c;
	cin>>a>>b>>c;
	
	int mini = min(min(a, b), c);
	int maxi = max(max(a, b), c);
	
	int dis = maxi-mini;
	
	cout<<dis<<"\n";
	
	return 0;
}
