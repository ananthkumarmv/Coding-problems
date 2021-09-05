#include<iostream>

using namespace std;

int checkNiven(int n){
	int x=0;
	int y=n;
	while(n>0){
		x+=(n%10);
		n/=10;
	}
	if(y%x==0) cout<<y/x;
	else cout<<"0";
}

int main(){
	
	int n;
	cin>>n;
	checkNiven(n);
	
	return 0;
}

