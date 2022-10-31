#include<iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	
	int flag=1;
	int a;
	while(n--){
		cin>>a;
		if(a==1)
			flag = 0;
	}
	
	flag ? cout<<"EASY\n" : cout<<"HARD\n";

	return 0;
}
