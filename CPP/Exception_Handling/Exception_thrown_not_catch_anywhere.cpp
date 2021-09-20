#include<iostream>

using namespace std;

int main(){
	
	try{
		throw 'a';
	}
	
	catch(int x){
		cout<<"caught ";
	}

	return 0;
}

