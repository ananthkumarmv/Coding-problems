#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	double a, b;

	cin>>a>>b;
	
	char c;
	cin>>c;
	
	if(c == '+')
		cout<<a+b;
		
	else if(c == '-')
		cout<<a-b;
		
	else if(c == '*')
		cout<<a*b;
		
	else
		cout<<fixed<<setprecision(6)<<(a/b)<<endl;
		
	return 0;
}
