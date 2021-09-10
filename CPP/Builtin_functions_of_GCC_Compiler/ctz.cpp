#include<iostream>

//This function is used to count the trailing zeros of the given 
//integer. Note : ctz = count trailing zeros.
//Example: Count no of zeros from last to first occurrence 
//of one(set bit).
//a = 16
//Binary form of 16 is 00000000 00000000 00000000 00010000
//Output: ctz = 4


using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	cout<<__builtin_ctz(n)<<endl;
	cout<<__builtin_ctzll(n)<<endl;
	cout<<__builtin_ctzll(n);
	return 0;
}

