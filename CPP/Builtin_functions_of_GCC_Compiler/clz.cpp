#include<iostream>

//This function is used to count the leading zeros of the integer. 
//Note : clz = count leading zero’s
//Example: It counts number of zeros before the first occurrence of one(set bit).
//a = 16
//Binary form of 16 is 00000000 00000000 00000000 00010000
//Output: 27



using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	cout<<__builtin_clz(n);

	return 0;
}

