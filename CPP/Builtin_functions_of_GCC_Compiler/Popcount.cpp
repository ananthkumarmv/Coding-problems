#include<iostream>

//_builtin_popcount(x): This function is used to count 
//the number of one’s(set bits) in an integer.

//4-100-1
//5=101-2

using namespace std;

int main(){
	int n;
	cin>>n;
	
	cout<<__builtin_popcount(n)<<"\n";
	
	cout<<__builtin_popcountll(n);   // long long

	return 0;
}

