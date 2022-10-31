#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	while(t--){
		
		string str;
		cin>>str;
		
		int sum=0;
		
		for(int i=0; i<str.length(); i++)
			if(isdigit(str[i]))
				sum += (str[i] - '0');
		
		cout<<sum<<"\n";
		
	}
	return 0;
}
