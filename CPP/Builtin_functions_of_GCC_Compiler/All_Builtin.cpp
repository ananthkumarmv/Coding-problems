#include<iostream>

using namespace std;




int main(){
	
	int n;
	cin>>n;
	
	cout<<"The number of 1's in n is: "<<__builtin_popcount(n)<<endl;
	
	cout<<"parity of n is: "<<__builtin_parity(n)<<endl;
	
	cout<<"Number of leading zero's in n is: "<<__builtin_clz(n)<<endl;
	
	// it only works for unsigned values
	cout<<"Number of leading zero's in n is: "<<__builtin_clz(-n)<<endl;
	
	cout<<"Number of trailing zero's in n is: "<<__builtin_ctz(n)<<endl;

	return 0;
}

