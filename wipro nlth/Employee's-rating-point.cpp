#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n>=30&&n<=100){
		if(n>=30&&n<=50) cout<<"D";
		else if(n<=60) cout<<"C";
		else if(n<=80) cout<<"B";
		else cout<<"A";
		
	}

	return 0;
}

