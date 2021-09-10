#include<iostream>

//This function is used to check the parity of a number.
//This function returns true(1) if the number has odd parity else it returns false(0) for even parity.
//Example:
//if x = 7
//7 has odd no. of 1's in its binary(111).
//Output: Parity of 7 is 1


using namespace std;

int main(){
	int n;
	cin>>n;
	
	cout<<__builtin_parity(n);

	return 0;
}

