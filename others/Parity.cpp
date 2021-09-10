#include<iostream>

//log(n)

using namespace std;

int getParity(unsigned int n){
	int parity=0;
	
	while(n){
		parity=!parity;
		n=n&(n-1);
	}
	return parity;
}


int main(){
	
	unsigned int n;
	cin>>n;
	
	cout<<(getParity(n) ? "Odd": "Even");

	return 0;
}

