#include<iostream>


using namespace std;

unsigned int Log2n(unsigned int n){
	return (n>1) ? 1+Log2n(n/2):0;
}


int main(){
	
	unsigned int n=32;
	cout<<Log2n(n);

	return 0;
}

