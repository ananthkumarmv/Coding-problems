#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

template <typename T>
int size_in_bits(const T &a){
	return sizeof(a)*8;
}



int main(){
	cout<<size_in_bits(18)<<endl;
	cout<<size_in_bits('f')<<endl;
	cout<<size_in_bits(32.4f)<<endl;
	cout<<size_in_bits(32.4);
	return 0;
}

