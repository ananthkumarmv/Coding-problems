#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, x(0);
	cin>>n;
	
	while(n--){
		string str;
		cin>>str;
		
		if(str[1] == '+')
			++x;
		else
			--x;
		
	}
	cout<<x<<"\n";

	return 0;
}
