#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int a1, a2, a3, a4;
	cin>>a1>>a2>>a3>>a4;
	
	string str;
	cin>>str;
	
	int tot = 0;
	
	for(int i=0; i<str.length(); i++){
		
		if(str[i] == '1')
			tot += a1;
			
		else if(str[i] == '2')
			tot += a2;
			
		else if(str[i] == '3')
			tot += a3;
			
		else if(str[i] == '4')
			tot += a4;	
		
	}
	
	cout<<tot<<"\n";

	return 0;
}
