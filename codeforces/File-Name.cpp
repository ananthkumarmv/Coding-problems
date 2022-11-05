#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	
	string str;
	cin>>str;
	
	int conseq = 0;
	int rc = 0;
	
	for(int i=0; i<n; i++){
			
		if(str[i] == 'x')
			conseq++;
		else
			conseq = 0;
		
		if(conseq >= 3)
			rc++;	
		
	}
	
	cout<<rc<<"\n";

	return 0;
}
