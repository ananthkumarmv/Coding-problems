#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	
	string str;
	cin>>str;
	
	int c=0;
	for(int i=0; i<n-1; i++)
		if(str[i] == str[i+1])
			c++;
			
	cout<<c<<"\n";
	return 0;
}
