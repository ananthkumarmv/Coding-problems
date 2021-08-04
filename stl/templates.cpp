#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long

using namespace std;

template<typename T>		//this line takes datatype as an argument
T myMax(T x, T y){
	return (x>y)? x:y;
}

int main() {
	
	cout<<myMax<int>(3,7)<<endl;
	cout<<myMax<char>('a', 't');
    
    return 0;
}


