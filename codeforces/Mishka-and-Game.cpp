#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	
	int d1, d2, m, c;
	
	m = c = 0;
	while(n--){
		
		cin>>d1>>d2;
		
		if(d1>d2)
			m++;
		else if(d2>d1)
			c++;
		
	}
	
	if(m>c)
		cout<<"Mishka\n";
	else if(c>m)
		cout<<"Chris\n";
	else
		cout<<"Friendship is magic!^^\n";

	return 0;
}
